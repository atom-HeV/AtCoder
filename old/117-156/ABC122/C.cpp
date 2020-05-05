#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, Q;
    string S;
    
    cin >> N >> Q;
    cin >> S;

    vector<int> l(Q), r(Q), ac(N+1);

    for(int i=0; i<Q; i++){
        cin >> l[i] >> r[i];
    }

    ac[0]=0;
    for(int i=0; i<N-1; i++){
        if(S[i]=='A' && S[i+1]=='C'){
            ac[i+1] = ac[i]+1;
        }else{
            ac[i+1] = ac[i];
        }
    }
    ac[N]=ac[N-1];

    for(int i=0; i<Q; i++){
        cout << min(ac[r[i]],ac[r[i]-1]) - ac[l[i]-1] << endl;
    }
    return 0;
}