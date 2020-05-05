#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, M, C, sum,ans=0;
    cin >> N >> M >> C;
    vector<int> B(M),A(M);
    for(int i=0; i<M; i++){
        cin >> B[i];
    }
    for(int i=0;i<N; i++){
        sum = 0;
        for(int j=0; j<M; j++){
            cin >> A[j];
            sum += A[j]*B[j];
        }
        sum += C;
        if(sum > 0){
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}