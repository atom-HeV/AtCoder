#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long X,Y,Z,K,I=0;
    cin >> X >> Y >> Z >> K;
    vector<long long> A(X), B(Y), C(Z), sum(K);
    long long sum_tmp;
    for(int i=0;i<X;i++){
        cin >> A[i];
    }
    for(int i=0;i<Y;i++){
        cin >> B[i];
    }
    for(int i=0;i<Y;i++){
        cin >> C[i];
    }

    for(int i=0; i<(int)X; i++){
        for(int j=0; j<(int)Y; j++){
            for(int k=0; k<(int)Z; k++){
                sum_tmp=A[i]+B[j]+C[k];
                if(I<K){
                    sum[I] = sum_tmp;
                    I++;
                }else{
                    sort(sum.begin(),sum.end(),greater<long long>());
                    if(sum[K-1]<sum_tmp){
                        sum[K-1] = sum_tmp;
                    }
                }
            }
        }
    }

    sort(sum.begin(),sum.end(),greater<long long>());

    for(int i=0; i<K; i++){
        cout << sum[i] << endl;
    }
    return 0;
}