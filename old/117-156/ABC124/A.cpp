#include <iostream>

using namespace std;

int main(){
    int A,B,ans=0;
    cin >> A >> B;
    ans += max(A,B);
    if(A>B){
        A--;
    }else{
        B--;
    }
    ans += max(A,B);
    cout << ans << endl;
    return 0;
}