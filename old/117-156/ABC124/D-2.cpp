#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N,K;
    string S;
    cin >> N >> K;
    cin >> S;
    vector<int> l;
    int i=0,tmp=0;
    while(i<N){
        tmp=0;
        if(S[i]=='1'){
            while(S[i]=='1'){
                tmp++;
                i++;
            }
        }else{
            while(S[i]=='0'){
                tmp++;
                i++;
            }
        }
        l.push_back(tmp);
    }
    int hp;
    int ans=0;
    for(int i=0; i<(int)l.size(); i++){
        tmp =0;
        hp = K;
        
        if((S[0]=='1' && i%2==0) || (S[0]=='0' && i%2==1)){
            hp = hp *2 + 1;
            hp = min(hp, (int)l.size()-i);
            for(int j=i; j<i+hp; j++){
                tmp += l[j];
            }
        }else{
            if(i==0){
                hp = hp *2;
                hp = min(hp, (int)l.size()-i);
                for(int j=i; j<i+hp; j++){
                    tmp += l[j];
                }
            }
        }
        ans = max(ans,tmp);
        if(ans == N){
            break;
        }
    }
    cout << ans << endl;
    return 0;
}