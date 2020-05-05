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

void dfs(lint ans_edge[100000], lint N, vector<plint> edge, lint start_node, lint start_edge, lint color){
    lint i = start_edge;
    while(edge[i].first != start_node){
        i++;
        if(i==N){
            return;
        }
    }
    lint paint = 1;
    while(edge[i].first == start_node){
        if(paint == color){
            paint++;
        }
        ans_edge[i] = paint;
        dfs(ans_edge, N, edge, edge[i].second, i, paint);
        paint++;
        i++;
        if(i==N){
            return;
        }
    }
}

void Main()
{
    lint N, a, b, ans;
    cin >> N;
    vector<plint> edge(N);
    FOR(i, 1, N){
        cin >> a >> b;
        edge[i].first = a;
        edge[i].second = b;
    }

    lint ans_edge[N];
    dfs(ans_edge, N, edge, edge[1].first, 1, 0);
    ans = 0;
    FOR(i, 1, N){
        ans = max(ans, ans_edge[i]);
    }
    cout << ans << endl;
    FOR(i, 1, N){
        cout << ans_edge[i] << endl;
    }
}

//---------------------------------------------------------------
int main()
{
    cout << fixed << setprecision(15);
    Main();
    return 0;
}