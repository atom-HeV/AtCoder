#include <iostream>
#include <vector>

using namespace std;

int binary_search_close(vector<int> place, int x, int imin, int imax){
    if(imax < imin){
        if(abs(place[imax] -x) < abs(place[imin] - x)){
            return imax;
        }else{
            return imin;
        }
    }else{
        int imid = (imin + imax) / 2;
        if(place[imid] > x){
            return binary_search_close(place, x, imin, imid -1);
        }else if(place[imid] < x){
            return binary_search_close(place, x, imid + 1, imax);
        }else{
            cout << "error" << endl;
            return imid;
        }
    }
    return 0;
}

int main(){
    int A, B, Q;
    cin >> A >> B >> Q;
    vector<int> s(A), t(B), x(Q);
    for(int i=0; i<A; i++){
        cin >> s[i];
    }
    for(int i=0; i<B; i++){
        cin >> t[i];
    }
    for(int i=0; i<Q; i++){
        cin >> x[i];
    }

    for(int i=0; i<Q; i++){
        long long s_close, t_close;
        s_close = s[binary_search_close(s, x[i], 0, A-1)];
        t_close = t[binary_search_close(t, x[i], 0, B-1)];
        cout << "**" << x[i] << "," << s_close << "," << t_close << endl;
        if(x[i] < s_close && x[i] < t_close){
            cout << max(s_close-x[i], t_close-x[i]);
        }else if(x[i] > s_close && x[i] > t_close){
            cout << max(x[i]-s_close, x[i]-t_close);
        }else{
            cout << "*" << abs(x[i]-s_close) << endl;
            cout << "*" << abs(x[i]-t_close) << endl;
            cout << abs(s_close - t_close) + min(abs(x[i]-s_close), abs(x[i]-t_close));
        }
        cout << endl;
    }
    return 0;
}