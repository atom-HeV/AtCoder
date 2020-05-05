#include <iostream>

using namespace std;

int main(){
    string S;
    cin >> S;
    int ans1=0,ans2=0;
    for(int i=0; i<(int)S.length(); i++){
        if(i%2){
            if(S[i]=='0'){
                ans1++;
            }else{
                ans2++;
            }
        }else{
            if(S[i]=='1'){
                ans1++;
            }else{
                ans2++;
            }
        }
    }
    cout << min(ans1,ans2) << endl;
    return 0;
}