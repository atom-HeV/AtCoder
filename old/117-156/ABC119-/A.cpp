#include <iostream>

using namespace std;

int main(){
    string S;
    cin >> S;
    int year=0, month=0, day=0;
    for(int i=0; i<4;i++){
        year *= 10;
        year += S[i] - '0';
    }
    for(int i=5; i<7; i++){
        month *= 10;
        month += S[i] - '0';
    }
    for(int i=8; i<10; i++){
        day *= 10;
        day += S[i] - '0';
    }

    if(year == 2019){
        if(month <= 4){
            cout << "Heisei" << endl;
        }else{
            cout << "TBD" << endl;
        }
    }else if(year < 2019){
        cout << "Heisei" << endl;
    }else{
        cout << "TBD" << endl;
    }
    return 0;
}