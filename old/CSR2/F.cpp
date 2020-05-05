#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<pair<long long, long long>> coin(N);
    int a, b;
    for(int i=0; i<N; i++){
        cin >> a >> b;
        coin[i] = make_pair(min(a, b), max(a, b));
    }

    sort(coin.begin(), coin.end());
    long long val = 0, pre_f=0, pre_s=0;
    for(int i=0; i<N; i++){
        if(coin[i].first != pre_f)
            val++;
        else
            if(coin[i].second != pre_s)
                val++;
        pre_f = coin[i].first;
        pre_s = coin[i].second;
    }
    cout << val << endl;
    return 0;
}