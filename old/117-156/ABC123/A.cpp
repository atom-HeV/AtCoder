#include <iostream>

using namespace std;

int main(){
    int a[5],k;
    for(int i=0; i<5; i++){
        cin >> a[i];
    }
    cin >> k;
    for(int i=0;i<4;i++){
        for(int j=i+1; j<5; j++){
            if(a[j]-a[i]>k){
                cout << ":(" << endl;
                return 0;
            }
        }
    }
    cout << "Yay!" << endl;
    return 0;
}