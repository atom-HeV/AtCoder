#include <iostream>

using namespace std;

// 最大公約数を求める再帰関数

// 最小公倍数を求める関数
// gcdが必須
// 2つの自然数の間にしか成り立たない

int gcd(int m, int n){
    if(m < 0 || n < 0) return 0; // エラー
    if(m < n) swap(m, n);
    if(n == 0) return m;
    return gcd(n, m % n);
}

int lcm(int m, int n){
    if(m < 0 || n < 0) return 0; // エラー
    return m * n / gcd(m, n);
}

int main(){
    int a, b;
    cout << "入力された2整数の最小公倍数を返します" << endl;
    cin >> a >> b;
    cout << "答え：" << lcm(a, b) << endl;
    return 0;
}