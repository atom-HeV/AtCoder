#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> H(N);
    for (int i = 0; i < N; i++)
    {
        cin >> H[i];
    }
    vector<pair<int,int>> road(M*2);
    for (int i = 0; i < M; i++)
    {
        cin >> road[i].first >> road[i].second;
        road[i+M].first = road[i].second;
        road[i+M].second = road[i].first;
    }

    sort(road.begin(), road.end());

    int ans = 0;
    int itr = 0;
    int flg;
    for (int i = 0; i < N; i++)
    {
        flg = 1;
        while(road[itr].first == i+1){
            if(H[i] <= H[road[itr].second-1]){
                flg = 0;
            }
            itr++;
        }
        if(flg){
            ans++;
        }
    }
    
    cout << ans << endl;

    return 0;
}