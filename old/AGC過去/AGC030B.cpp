#include <iostream>
#include <vector>

using namespace std;

long long L;

vector<long long> X(200000);

long long burn(long long length, long long now, int n, int direction){
    long long tmp;
    if(direction == 0){
        tmp = X[0] - now;
        if(tmp < 0){
            tmp += L;
        }
        length += tmp;
        now = X[0];
    }
    return length;
}

int main(){
    long long now=0, f, b, length=0;
    int N;
    cin >> L >> N;
    for(int i=0;i<N;i++){
        cin >> X[i];
    }

    while(N>0){
        f = X[0] - now;
        if(f < 0){
            f += L;
        }
        b = now - X[N-1];
        if(b < 0){
            b += L;
        }
        if(f > b){
            cout << X[0] << "," << f << endl;
            length += f;
            now = X[0];
            N--;
            X.erase(X.begin());
        }else{
            cout << X[N-1] << "," << b << endl;
            length += b;
            now = X[N-1];
            N--;
            X.pop_back();
        }
    }
    cout << length << endl;
    return 0;
}