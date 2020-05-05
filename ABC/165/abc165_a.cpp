#include <bits/stdc++.h>

using namespace std;

int main() {
    int K, A, B;
    cin >> K;
    cin >> A >> B;
    if(B/K > A/K || A%K == 0 || B%K == 0) {
        cout << "OK" << endl;
    }else{
        cout << "NG" << endl;
    }
    return 0;
}