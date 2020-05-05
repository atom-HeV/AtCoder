#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;

    vector<int> like(M,0);
    for(int i=0; i<N; i++){
        int K,A;
        cin >>K;
        for(int j=0; j<K; j++){
            cin >> A;
            A--;
            like[A]++;
        }
    }

    int ans=0;
    for(int i=0;i<M;i++){
        if(like[i]==N) ans++;
    }
    cout << ans << endl;
    return 0;
}