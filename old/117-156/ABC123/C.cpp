#include <iostream>

using namespace std;

int main(){
    long long N, cap[5], min=1000000000000000,ans;
    cin >> N;
    for(int i=0; i<5; i++){
        cin >> cap[i];
        if(cap[i]<min){
            min = cap[i];
        }
    }
    if(N%min == 0){
        ans = N/min + 4;
    }else{
        ans = N/min + 5;
    }
    cout << ans << endl;
    return 0;
}