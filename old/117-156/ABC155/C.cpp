#include <bits/stdc++.h>
using namespace std;

using ll = long long;

constexpr ll INF = 1'010'000'000'000'000'017LL;
constexpr ll MOD = 1'000'000'007LL;
constexpr double EPS = 1e-12;
constexpr double PI = 3.14159265358979323846;

#define FOR(i, start, end) for(ll i = (start); i < end; i++)
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()

template<class T> inline void YES(T condition){ if(condition) cout << "YES" << endl; else cout << "NO" << endl; }
template<class T> inline void Yes(T condition){ if(condition) cout << "Yes" << endl; else cout << "No" << endl; }

template<class T = ll> using V = vector<T>;
using vi = V<int>; using vl = V<>; using vvi = V< V<int> >;
using pint = pair<int, int>;
using pll = pair<ll, ll>; using vp = V<pll>;

ll mod(ll val, ll m){ ll res = val % m; if(res < 0) res += m; return res;}
ll modinv(ll a, ll m) { ll b = m, u = 1, v = 0; while (b) { ll t = a / b; a -= t * b; swap(a, b); u -= t * v; swap(u, v); } u %= m; if (u < 0) u += m; return u;}
ll modpow(ll a, ll n, ll mod) { ll res = 1; while (n > 0) { if (n & 1) res = res * a % mod; a = a * a % mod; n >>= 1;} return res;}
template<class T> T gcd(T a, T b) { if (a < b) std::swap(a, b); while (b) std::swap(a %= b, b); return a; }
template<class T> T lcm(const T a, const T b) { return a / gcd(a, b) * b; }


//---------------------------------------------------------------

void Main()
{
    ll N;
    cin >> N;
    V<string> S(N+1, "~");
    REP(i, N){
        cin >> S[i];
    }

    sort(ALL(S));

    V<string> ans;
    ll max_cnt, num, cnt;
    max_cnt = 0;
    num = 0;
    cnt = 0;
    REP(i, N){
        cnt++;
        if(S[i] != S[i+1]){
            if(cnt > max_cnt){
                max_cnt = cnt;
                num = 1;
                ans.clear();
                ans.push_back(S[i]);
            }else if(cnt == max_cnt){
                num += 1;
                ans.push_back(S[i]);
            }
            cnt = 0;
        }
    }

    cout << endl;
    REP(i, num){
        cout << ans[i] << endl;
    }
}

//---------------------------------------------------------------
int main()
{
    cout << fixed << setprecision(15);
    Main();
    return 0;
}