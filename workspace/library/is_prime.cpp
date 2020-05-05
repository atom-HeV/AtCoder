#include <iostream>
#include <cmath>

using namespace std;

int is_prime(int n){
    if(n < 2){
        return 0;
    }else if(n == 2){
        return 1;
    }
    if(n%2 == 0){
        return 0;
    }

    for(int i = 3; i<=sqrt(n); i+=2){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}


int is_prime_long(long long n){
    if(n < 2){
        return 0;
    }else if(n == 2){
        return 1;
    }
    if(n%2 == 0){
        return 0;
    }

    for(long long i = 3; i<=sqrt(n); i+=2){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    long long n;
    cin >> n;
    if(is_prime_long(n)){
        cout << n << " is prime." << endl;
    }else{
        cout << n << "is not prime." << endl;
    }
    return 0;
}