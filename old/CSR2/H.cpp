#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long long> A(N), B(N);
    for(int i=0; i<N; i++){
        cin >> A[i] >> B[i];
    }

    long long n;
    for(int i=0; i<N; i++){
        n = abs(A[i] - B[i]);
        if(n == 0)
            n = -1;
        cout << n << endl;
    }
    return 0;
}