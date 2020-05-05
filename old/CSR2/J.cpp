#include <iostream>
#include <vector>
using namespace std;
 
long long gcd(long long m, long long n){
    if(m < 0 || n < 0) return 0; // エラー
    if(m < n) swap(m, n);
    if(n == 0) return m;
    return gcd(n, m % n);
}
 
int main(){
    int N;
    cin >> N;
    vector<long long> A(N), B(N);
    for(int i=0; i<N; i++){
        cin >> A[i] >> B[i];
    }
 
    for(int i=0; i<N; i++){
        cout << gcd(A[i], B[i]) << endl;
    }
    return 0;
}