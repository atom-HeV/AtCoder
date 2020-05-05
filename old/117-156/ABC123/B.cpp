#include <iostream>

using namespace std;

int main(){
    int dish[5],min=10,ans=0;
    for(int i=0;i<5;i++){
        cin >> dish[i];
        if(dish[i]%10>0 && dish[i]%10<min){
            min = dish[i]%10;
        }
        if(dish[i]%10){
            ans += dish[i] /10 * 10 + 10;
        }else{
            ans += dish[i];
        }
    }
    if(min < 10){
        ans -= 10 - min;
    }
    cout << ans << endl;
    return 0;
}