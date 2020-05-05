#include <iostream>

using namespace std;

int main(){
    int N;
    string s;
    cin >> N;
    cin >> s;
    int ans=0;
    for(int i=0;i<N;i++){
        if(s[i]=='R'){
            ans++;
        }else{
            ans--;
        }
    }
    if(ans>0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}