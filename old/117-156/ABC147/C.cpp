#include <bits/stdc++.h>
using namespace std;

using lint = long long;
using pint = pair<int, int>;
using plint = pair<lint, lint>;

constexpr lint INF = 1'010'000'000'000'000'017LL;
constexpr lint MOD = 1'000'000'007LL;
constexpr double EPS = 1e-12;
constexpr double PI = 3.14159265358979323846;

#define FOR(i, start, end) for(lint i = (start); i < end; i++)
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()

template<class T> inline void YES(T condition){ if(condition) cout << "YES" << endl; else cout << "NO" << endl; }
template<class T> inline void Yes(T condition){ if(condition) cout << "Yes" << endl; else cout << "No" << endl; }

lint mod(lint val, lint m){ lint res = val % m; if(res < 0) res += m; return res;}
lint modinv(lint a, lint m) { lint b = m, u = 1, v = 0; while (b) { lint t = a / b; a -= t * b; swap(a, b); u -= t * v; swap(u, v); } u %= m; if (u < 0) u += m; return u;}
lint modpow(lint a, lint n, lint mod) { lint res = 1; while (n > 0) { if (n & 1) res = res * a % mod; a = a * a % mod; n >>= 1;} return res;}
lint gcd(lint a, lint b){ if(a < b) swap(a, b); if(b == 0) return a; return gcd(b, a%b);}
lint lcm(lint a, lint b){ return a * b / gcd(a, b);}


//---------------------------------------------------------------

void recursive_comb(int *indexes, int s, int rest, std::function<void(int *)> f) {
    if (rest == 0) {
        f(indexes);
    } else {
        if (s < 0) return;
        recursive_comb(indexes, s - 1, rest, f);
        indexes[rest - 1] = s;
        recursive_comb(indexes, s - 1, rest - 1, f);
    }
}

// nCkの組み合わせに対して処理を実行する
void foreach_comb(int n, int k, std::function<void(int *)> f) {
    int indexes[k];
    recursive_comb(indexes, n - 1, k, f);
}

vector<vector<int>> test(16, vector<int>(16, -1));

int judge(int N, int tf[16]){
    FOR(i, 1, N+1){
        if(tf[i] == 1){
            FOR(j, 1, N+1){
                if(test[i][j] != -1){
                    if(test[i][j] != tf[j]){
                        return 0;
                    }
                }
            }
        }
    }
    return 1;
}

void Main()
{
    int N, A, x, y, ans, flg;
    cin >> N;
    vector<int> tf(N+1, 1);

    REP(i, N){
        cin >> A;
        REP(j, A){
            cin >> x >> y;
            test[i+1][x] = y;
        }
    }

    flg = 1;
    ans = 1;
    while(flg == 1){
        flg = 0;
        foreach_comb(N, ans, [](int *indexes) {
            FOR(i, 1, N+1){
                tf[i] = 0;
            }
            REP(i, ans){
                tf[indexes[i]] = 1;
            }
        });
    }

}

//---------------------------------------------------------------
int main()
{
    cout << fixed << setprecision(15);
    Main();
    return 0;
}