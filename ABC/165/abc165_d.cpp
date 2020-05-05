#include <bits/stdc++.h>

using namespace std;

int main() {
    long long A, B, N;
    cin >> A >> B >> N;
    long long ans;
    if( N >= B-1 ){
        ans = A * (B-1) / B;
    }else{
        ans = A * N / B;
    }
    cout << ans << endl;
    return 0;
}