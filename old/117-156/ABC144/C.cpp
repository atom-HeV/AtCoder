#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long N, j;
    cin >> N;
    for(long long i = sqrtl(N); i > 0; i--){
        if(N % i == 0){
            j = N/i;
            cout << i + j - 2 << endl;
            return 0;
        }
    }
    cout << "Error" << endl;
    return 0;
}