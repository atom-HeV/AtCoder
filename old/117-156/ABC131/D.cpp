#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<pair<long long, long long>> work(N);
    long long a, b, sum = 0;
    for(int i=0; i<N; i++){
        cin >> a >> b;
        work[i] = make_pair(b, a);
    }

    sort(work.begin(), work.end());

    for(int i=0; i<N; i++){
        sum += work[i].second;
        if(sum > work[i].first){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}