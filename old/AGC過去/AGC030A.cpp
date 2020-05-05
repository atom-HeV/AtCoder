#include <iostream>

using namespace std;

int main(){
    long long A, B, C;
    cin >> A >> B >> C;
    if(C <= A+B){
        cout << C + B << endl;
    }else{
        cout << A + B + B + 1<< endl;
    }
    return 0;
}