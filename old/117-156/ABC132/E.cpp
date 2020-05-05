#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<pair<int, int>> edge(M);
    for(int i = 0; i < M; i++){
        cin >> edge[i].first >> edge[i].second;
    }
    int S, T;
    cin >> S >> T;
    sort(edge.begin(), edge.end());
    // for(int i = 0; i < M; i++){
    //     cout << edge[i].first << edge[i].second << endl;
    // }

    int step = 0, v;
    vector<int> visited(N+1, 0);
    queue<int> Q;
    visited[S] = 1;
    Q.push(S);

    while(!Q.empty()){
        v = Q.front();
        Q.pop();
        if(v == T){
            break;
        }
        
    }
    return 0;
}