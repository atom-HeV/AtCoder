#include <iostream>

using namespace std;

int main(){
    int H,W,h,w;
    cin >> H >> W;
    cin >> h >> w;

    cout << H*W-H*w-W*h+h*w << endl;
    return 0;
}