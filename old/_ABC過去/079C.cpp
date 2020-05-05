#include <iostream>

using namespace std;

int main(){
    int n,a,b,c,d;
    char op1,op2,op3;
    cin >> n;
    a = n/1000;
    b = (n%1000)/100;
    c = (n%100)/10;
    d = n%10;

    for(int i=0; i<8; i++){
        int ans = a;
        if(i&1){
            ans += b;
            op1='+';
        }else{
            ans -= b;
            op1='-';
        }
        if(i&2){
            ans += c;
            op2='+';
        }else{
            ans -= c;
            op2='-';
        }
        if(i&4){
            ans += d;
            op3='+';
        }else{
            ans -= d;
            op3='-';
        }

        if(ans == 7){
            cout << a << op1 << b << op2 << c << op3 << d << "=7" << endl;
            break;
        }
    }
    return 0;
}