#include <iostream>

using namespace std;

int main(){
    string S;
    cin >> S;
    int ans = 0,tmp=0;
    for(int i=0;i<(int)S.length();i++){
        if(S[i] == 'A' || S[i] == 'C' || S[i] == 'G' || S[i] == 'T'){
            tmp++;
        }else{
            ans = max(ans, tmp);
            tmp = 0;
        }
    }
    ans = max(ans, tmp);
    cout << ans << endl;
    return 0;
}