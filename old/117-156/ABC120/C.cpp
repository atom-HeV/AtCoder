#include <iostream>

using namespace std;

int main(){
    int ans=0,count0 = 0, count1=0;
    string S;
    cin >> S;
    for(int i=0; i<(int)S.length(); i++){
        if(S[i] == '0') count0++;
    }
    count1 = (int)S.length()-count0;
    ans = 2 * min(count0,count1);
    cout << ans << endl;
    return 0;
}