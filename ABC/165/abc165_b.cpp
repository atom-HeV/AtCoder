#include <bits/stdc++.h>

using namespace std;

int main() {
    long long X, m, ans;
    cin >> X;
    m = 100;
    ans = 0;
    while(m < X){
        ans++;
        m *= 1.01;
    }
    cout << ans << endl;
    return 0;
}