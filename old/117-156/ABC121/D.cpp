#include <iostream>
#include <cmath>

using namespace std;

long long one(long long n, long long p){
    n++;
    long long block, rem;
    block = n / (p*2) * p;
    rem = n % (p*2);
    if(rem > p){
        rem -= p;
    }else{
        rem = 0;
    }
    return block + rem;
}

long long f(long long A, long long B){
    long long ans = 0, comp;
    for(int i=0; i <= log2(B); i++){
        comp = pow(2,i);
        if((one(B, comp) - one(A-1, comp))%2){
            ans += comp;
        }
    }
    return ans;
}

int main(){
    long long A, B;
    cin >> A >> B;
    cout << f(A,B) << endl;
    return 0;
}