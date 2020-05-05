#include <iostream>

using namespace std;

long long f(long long N){
    if(N%2){
        return (N+1)/2%2;
    }else{
        return (N/2%2) ^ N;
    }
}

int main(){
    long long A, B;
    cin >> A >> B;
    cout << (f(B) ^ f(A-1)) << endl;
    return 0;
}