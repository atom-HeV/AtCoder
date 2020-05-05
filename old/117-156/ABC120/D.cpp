#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<int> A(100000),B(100000), visited(100000+1);

bool link(int start, int end, int t){
    if(start == end) return true;
    if(t>M) return false;
    visited[start] = 1;
    for(int i = t; i<M; i++){
        if(A[i]==start){
            if(visited[B[i]]==0){
                if(link(B[i], end, t)){
                    visited[start] = 0;
                    return true;
                }
            }
        }
    }
    for(int i = t; i<M; i++){
        if(B[i]==start){
            if(visited[A[i]]==0){
                if(link(A[i], end, t)){
                    visited[start] = 0;
                    return true;
                }
            }
        }
    }
    visited[start] = 0;
    return false;
}

int main(){
    long long ans = 0;
    cin >> N >> M;

    for(int i = 0; i < M; i++){
        cin >> A[i] >> B[i];
    }
    
    for(int i=1; i<=M; i++){
        ans=0;
        for(int j = 0; j < N; j++){
            for(int k = j+1; k < N; k++){
                if(!link(j+1,k+1,i)) ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}