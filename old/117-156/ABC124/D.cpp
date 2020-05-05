#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N,K;
    string S;
    cin >> N >> K;
    cin >> S;
    int i,ans=0, tmp = 0, hp = K;
    int start = 0;
    while(true){
        i = start;
        tmp = 0;
        hp = K;
        while(hp>0){
            if(S[i]=='0'){
                hp--;
                while(S[i]=='0'){
                    tmp++;
                    i++;
                }
            }
            if(S[i]=='1'){
                while(S[i]=='1'){
                    tmp++;
                    i++;
                }
            }
            if(tmp == N-start){
                hp = 0;
            }
        }
        ans = max(tmp,ans);
        start++;
        if(N - start < ans) break;
    }
    cout << ans << endl;
    return 0;
}