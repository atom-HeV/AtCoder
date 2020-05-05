#include <iostream>
#include <vector>

using namespace std;

vector<int> match{0,2,5,5,4,5,6,3,7,6};

dp(int i){
    if(i==0) {
        return 0;
    }
    if(i<0){
        return -100000000;
    }
    int max = 0;
    int temp;
    for(int j=1;j<=9;j++){
        if(i-match[j]>1){
            temp = dp(i-match[j])+1;
            if(temp>max){
                max = temp;
            }
        }else{
            return -100000000;
        }
    }
    return max;
}

int main(){
    int N,M,A;
    cin >> N >> M;


    vector<int> priority{1,7,4,5,3,2,9,6,8};
    vector<bool> can_use(10,false);

    for(int i=0; i<M; i++){
        cin >> A;
        can_use[A]=true;
    }

    vector<int> use(10,0);
    cout << "ans" << dp(N);
    /*while(N>0){
        for(int i=0;i<9;i++){
            if(dp(N-match[priority[i]] == dp(N)-1)){
                cout << priority[i];
                N-=match[priority[i]];
            }
        }
    }*/

    cout << endl;
    return 0;
}