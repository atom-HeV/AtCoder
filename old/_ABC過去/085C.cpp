#include <iostream>

using namespace std;

int main(){
    int N,Y;
    cin >> N >> Y;
    Y /= 1000;
    for(int i=0; i<=N;i++){
        if(10*i>Y) break;
        for(int j=0; j<=N-i;j++){
            int k = N-i-j;
            int yen = 10*i + 5*j + k;
            if(yen == Y){
                cout << i <<  " " << j << " " << k << endl;
                return 0;
            }else if(yen > Y) break;
        }
    }
    cout << -1 <<  " " << -1 << " " << -1 << endl;
    return 0;
}