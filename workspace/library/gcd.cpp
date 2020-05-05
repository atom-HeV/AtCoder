#include <iostream>

using namespace std;

// 最大公約数を求める再帰関数

int gcd(int m, int n){
    if(m < 0 || n < 0) return 0; // エラー
    if(m < n) swap(m, n);
    if(n == 0) return m;
    return gcd(n, m % n);
}

int main(){
    int a, b;
    cout << "入力された2整数の最大公約数を返します" << endl;
    cin >> a >> b;
    cout << "答え：" << gcd(a, b) << endl;
    return 0;
}