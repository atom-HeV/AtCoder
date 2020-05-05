#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long long> A(N), B(N);
    for(int i=0; i<N; i++){
        cin >> A[i] >> B[i];
    }

    long long sum = 0;
    for(int i=0; i<N; i++){
        sum += min(A[i]/2, B[i]);
    }
    cout << sum << endl;
    return 0;
}