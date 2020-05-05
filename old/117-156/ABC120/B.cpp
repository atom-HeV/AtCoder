#include <iostream>

using namespace std;

int main(){
    int A, B, K;
    cin >> A >> B >> K;
    for(int i = A; i > 0; i--){
        if(A%i == 0 && B%i == 0){
            K--;
        }
        if(K==0){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}