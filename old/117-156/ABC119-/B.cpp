#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    double otoshidama = 0, x;
    string u;
    for(int i=0; i<N; i++){
        cin >> x >> u;
        if(u == "JPY"){
            otoshidama += x;
        }else{
            otoshidama += x * 380000;
        }
    }
    cout << otoshidama << endl;
    return 0;
}