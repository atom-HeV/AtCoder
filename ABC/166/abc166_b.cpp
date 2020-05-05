#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int d, A;
    vector<int> ansA(N);
    for (int i = 0; i < N; i++)
    {
        ansA[i] = 1;
    }
    
    for (int i = 0; i < K; i++)
    {
        cin >> d;
        for (int j = 0; j < d; j++)
        {
            cin >> A;
            ansA[A-1] = 0;
        }
    }

    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        ans += ansA[i];
    }
    
    cout << ans << endl;
    return 0;
}