#include <iostream>

using namespace std;

long long gcd(long long m, long long n){
    if(m < 0 || n < 0) return 0; // エラー
    if(m < n) swap(m, n);
    if(n == 0) return m;
    return gcd(n, m % n);
}

long long lcm(long long m, long long n){
    if(m < 0 || n < 0) return 0; // エラー
    return m * n / gcd(m, n);
}

int main(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << b - a + 1 - (b/c + b/d - b/lcm(c,d) - ((a-1)/c + (a-1)/d - (a-1)/lcm(c,d))) << endl;
    return 0;
}