#include <iostream>
#include <vector>
using namespace std;

int gcd(int m, int n){
    if(m<n){
        int temp = m;
        m = n;
        n = temp;
    }
    if(n==0) return m;
    return gcd(n,m%n);
}

int main(){
    int N,ans;
    cin >> N;
    vector<int> HP(N);
    for(int i=0; i<N; i++){
        cin >> HP[i];
    }
    ans=HP[0];
    for(int i=1;i<N; i++){
        ans = gcd(ans,HP[i]);
    }
    cout << ans << endl;
    return 0;
}