#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, M, a, b, ans = 1;
    cin >> N >> M;
    vector<pair<int, int>> req(M);

    for(int i=0; i<M; i++){
        cin >> a >> b;
        req[i] = make_pair(a, b);
    }

    sort(req.begin(),req.end());

    int req_min = 1, req_max = N;
    for(int i=0; i<M; i++){
        req_min = max(req_min, req[i].first);
        req_max = min(req_max, req[i].second);
        if(req_min >= req_max){
            ans++;
            i--;
            req_min = 1;
            req_max = N;
        }
    }
    cout << ans << endl;
    return 0;
}