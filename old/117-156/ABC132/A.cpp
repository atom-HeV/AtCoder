#include <iostream>

using namespace std;

int main(){
    string S;
    cin >> S;
    for(int i = 0; i < 4; i++){
        int count = 0;
        for(int j = 0; j < 4; j++){
            if(S[i] == S[j]){
                count ++;
            }
        }
        if(count != 2){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}