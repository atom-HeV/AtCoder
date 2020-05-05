#include <iostream>

using namespace std;
#define MAP_SIZE 10

char map[MAP_SIZE][MAP_SIZE];
int land=0;
bool research[MAP_SIZE][MAP_SIZE];

void search(int x, int y){
    if(x<0 || x>=MAP_SIZE || y<0 || y>=MAP_SIZE || map[x][y]=='x') return;
    if(research[x][y]) return;
    research[x][y]=true;
    land--;

    search(x-1, y);
    search(x+1, y);
    search(x, y-1);
    search(x, y+1);
}

void reset(){
    for(int i=0; i<MAP_SIZE; i++){
        for(int j=0; j<MAP_SIZE; j++){
            research[i][j]=false;
        }
    }
}

int main(){
    for(int i=0; i<MAP_SIZE; i++){
        for(int j=0; j<MAP_SIZE; j++){
            cin >> map[i][j];
            if(map[i][j]=='o'){
                land++;
            }
        }
    }
    for(int i=0; i<MAP_SIZE; i++){
        for(int j=0; j<MAP_SIZE; j++){
            if(map[i][j]=='x'){
                int land_temp = land;
                land++;
                map[i][j]='o';
                search(i,j);
                if(land==0){
                    cout << "YES" << endl;
                    return 0;
                }else{
                    land = land_temp;
                    map[i][j]='x';
                    reset();
                }
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}