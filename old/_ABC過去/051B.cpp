#include <iostream>

using namespace std;

int calc_combination(int x, int y, int z){
    if(x == y && y == z){
        return 1;
    }
    else if(x == y || y == z){
        return 3;
    }
    else{
        return 6;
    }
    cout << "error" << endl;
    return 0;
}

int main(){
    int K,S;
    cin >> K >> S;

    int ans = 0;
    for(int x=0; x<=K; x++){
        for(int y=x; y<=K; y++){
            for(int z=y; z<=K;z++){
                if(x+y+z==S){
                    ans += calc_combination(x,y,z);
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}