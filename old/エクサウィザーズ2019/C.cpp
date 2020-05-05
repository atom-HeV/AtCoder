#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int N,Q;
vector<pair<char, int>> magic(200000);
string s;

int golem(int n){

    for(int i=0; i<Q; i++){
        if(magic[i].first == s[n]){
            n += magic[i].second;
            if(n<0){
                return -1;
            }else if(n>=N){
                return 1;
            }
        }
    }
    return 0;
}

int left(int imin, int imax){
    if(imax < imin){
        cout << "error" << endl;
        return -1;
    }else{
        int imid = imin + (imax - imin) / 2;
        int f = golem(imid), e = golem(imid+1);
        if(e==-1){
            return left(imid+1, imax);
        }else if(f!=-1){
            return left(imin, imid-1);
        }else{
            return imid;
        }

    }
}

int right(int imin, int imax){
    if(imax < imin){
        cout << "error" << endl;
        return -1;
    }else{
        int imid = imin + (imax - imin) / 2;
        int f = golem(imid), e = golem(imid+1);
        if(e!=1){
            return right(imid+1, imax);
        }else if(f==1){
            return right(imin, imid-1);
        }else{
            return imid;
        }

    }
}

int main(){
    int ans;
    cin >> N >> Q;
    cin >> s;


    char t,d;
    int dir;
    for(int i=0; i<Q; i++){
        cin >> t >> d;
        if(d=='L'){
            dir=-1;
        }else{
            dir=1;
        }
        magic[i] = make_pair(t, dir);
    }

    ans = right(0,N-1) - left(0, N-1);
    cout << ans << endl;
    return 0;
}