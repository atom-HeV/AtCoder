#include <iostream>

using namespace std;

#define MAX_H 500
#define MAX_W 500

int H,W;
char maze[MAX_H][MAX_W];
bool reached[MAX_H][MAX_W];

void search(int x, int y){
    if(x<0 || x>=H || y<0 || y>=W || maze[x][y]=='#') return;
    if(reached[x][y]) return;
    reached[x][y] = true;

    search(x+1, y); // 右
    search(x-1, y); // 左
    search(x, y+1); // 下
    search(x, y-1); // 上
}

int main(){
    cin >> H >> W;
    int start_x=0, start_y=0, goal_x=0, goal_y=0;
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >> maze[i][j];
            if(maze[i][j]=='s'){
                start_x = i;
                start_y = j;
            }else if(maze[i][j]=='g'){
                goal_x = i;
                goal_y = j;
            }
        }
    }
    search(start_x,start_y);

    if(reached[goal_x][goal_y]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}