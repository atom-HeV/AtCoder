#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define INF 1000000000

int N, A, B, C;
vector<int> bamboo(8);

int get_bamboo(int cur, int a, int b, int c){
    if(cur == N){
        if(min(a, min(b, c)) > 0){
            return abs(a - A) + abs(b - B) + abs(c - C) -30;
        }else return INF;
    }
    int ret0,ret1,ret2,ret3;
    ret0 = get_bamboo(cur + 1, a, b, c);
    ret1 = get_bamboo(cur + 1, a + bamboo[cur], b, c) +10;
    ret2 = get_bamboo(cur + 1, a, b + bamboo[cur], c) +10;
    ret3 = get_bamboo(cur + 1, a, b, c + bamboo[cur]) +10;
    return min(min(ret0, ret1), min(ret2, ret3));
}

int main(){
    cin >> N >> A >> B >> C;
    for(int i=0; i<N; i++){
        cin >> bamboo[i];
    }

    cout << get_bamboo(0, 0, 0, 0) << endl;;

    return 0;
}