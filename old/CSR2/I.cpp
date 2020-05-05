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

    long long strong = 0, time1, time2;
    int draw = 0;
    for(int i=1; i<N; i++){
        time1 = A[strong]/B[i];
        if(A[strong] % B[i] != 0)
            time1+=1;
        time2 = A[i]/B[strong];
        if(A[i] % B[strong] != 0)
            time2+=1;
        if(time1 < time2){
            strong = i;
            draw = 0;
        }
        else if(time1 == time2){
            draw = 1;
        }
    }

    if(draw == 1)
        cout << -1 << endl;
    else
        cout << strong+1 << endl;
    return 0;
}