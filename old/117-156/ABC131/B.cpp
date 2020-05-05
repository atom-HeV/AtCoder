#include <iostream>

using namespace std;

int main(){
    int N, L;
    cin >> N >> L;
    int ans = 0;
    for(int i=0; i<N; i++){
        ans += L + i;
    }
    if(L > 0){
        ans -= L;
    }else{
        if(N + L <= 0){
            ans -= N + L -1;
        }
    }
    cout << ans << endl;
    return 0;
}