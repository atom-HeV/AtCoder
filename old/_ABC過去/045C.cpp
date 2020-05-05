#include <iostream>
#include <cmath>

using namespace std;

int main(){
    string S,temp_S;
    long long int sum=0;
    cin >> S;
    for(int i=0; i<pow(2,(int)S.size()-1); i++){
        temp_S = S;
        for(int j=8; j>=0; j--){
            /*cout << i << "," << (int)pow(2,j) << "," << (i&(int)pow(2,j)) << endl;*/
            if((i&(int)pow(2,j))){
                temp_S.insert(temp_S.begin()+3-j-1,'+');
                cout << temp_S << endl;
            }
        }
    }
    cout << sum;
    return 0;
}