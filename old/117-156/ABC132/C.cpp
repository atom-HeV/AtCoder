#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> d(N, 0);

    for(int i=0; i<N; i++){
        cin >> d[i];
    }

    sort(d.begin(), d.end());

    int p = d[N/2 - 1], q = d[N/2];
    int ans = q - p;

    cout << ans << endl;
    return 0;
}