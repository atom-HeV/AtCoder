#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int N, M, a, b;
    long long ans=0;
    cin >> N >> M;
    vector<pair<long long, int>> data(N);

    for(int i=0; i<N; i++){
        cin >> a >> b;
        data[i] = make_pair(a, b);
    }

    sort(data.begin(),data.end());

    for(int i=0;i<N;i++){
        if(data[i].second < M){
            ans += data[i].first * data[i].second;
            M -= data[i].second;
        }else{
            ans += data[i].first * M;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}