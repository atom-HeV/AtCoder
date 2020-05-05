#include <iostream>


#define M 1000000007;

using namespace std;

long long factrial(long long n){
    long long ans = 1;
    for(long long i = 2; i <= n; i++){
        ans = ans * i % M;
    }
    return ans;
}

int main(){
    int N, K;
    cin >> N >> K;
    int R = N - K;
    long long ans, ans_sum = 0;
    for(int i = 1; i <= K; i++){
        ans = factrial(R + i) / factrial(R);
        cout << ans << endl;
        ans_sum += ans;
    }
    return 0;
}