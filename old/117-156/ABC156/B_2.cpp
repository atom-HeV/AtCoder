#include <bits/stdc++.h>
using namespace std;

int main()
{
    double N, K;
    cin >> N >> K;
    cout << int(log(N) / log(K) + 1) << endl;
    return 0;
}