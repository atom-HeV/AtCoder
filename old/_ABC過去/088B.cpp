#include <iostream>
#include <queue>
#include <vector>
#include <iomanip>

using namespace std;

#define MAX_SIZE 50

vector<vector<char>> maze(MAX_SIZE,vector<char>(MAX_SIZE));
vector<vector<int>> move_n(MAX_SIZE,vector<int>(MAX_SIZE));
queue<vector<int>> route;
int R,C;

void confirm_move_n(int y, int x,int nom){
    if(y<0 || y>=R || x<0 || x>=C) return;
    if(maze[y][x]=='#') return;
    if(move_n[y][x]!=-1) return;
    move_n[y][x]=nom+1;
    route.push({y,x});
}

int main(){
    int sy,sx,gy,gx,y,x,nom,block=0;
    cin >> R >> C;
    sy = 1;
    sx=1;
    gy=R;
    gx=C;

    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            cin >> maze[i][j];
            move_n[i][j]=-1;
            if(maze[i][j]=='#') block++;
        }
    }

    move_n[sy-1][sx-1]=0;
    route.push({sy-1,sx-1});
    while(!route.empty()){
        y = route.front()[0];
        x = route.front()[1];
        nom = move_n[y][x];
        confirm_move_n(y+1, x, nom);
        confirm_move_n(y-1, x, nom);
        confirm_move_n(y, x+1, nom);
        confirm_move_n(y, x-1, nom);
        route.pop();
    }
    if(move_n[gy-1][gx-1]==-1){
        cout << -1 << endl;
    }else{
            cout << R*C - block -1 - move_n[gy-1][gx-1] << endl;
    }
    return 0;
}