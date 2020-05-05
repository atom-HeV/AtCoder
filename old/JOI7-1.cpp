#include <iostream>
#include <vector>
using namespace std;

int main(){
    int Y,i=0,ans=0;
    cin >> Y;
    Y = 1000 - Y;
    vector<int> coin{500,100,50,10,5,1};
    while(Y > 0){
        if(Y >= coin[i]){
            Y -= coin[i];
            ans++;
        }
        else i++;
    }
    cout << ans << endl;
    return 0;
}