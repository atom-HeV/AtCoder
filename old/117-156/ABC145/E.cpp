#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;




int main() {
    int N, T, A, B;
    int t_sum, ans;
    cin >> N >> T;

    vector<pair<int, int>> dish(N);
    vector<vector<int>> dp(N + 1, vector<int>(T));

    t_sum = 0;
    ans = 0;
    for (int i = 0; i < N; i++) {
        cin >> A >> B;
        t_sum += A;
        ans += B;
        dish[i].first = A;
        dish[i].second = B;
    }
    // 全部食べられる
    if (t_sum <= T) {
        cout << ans << endl;
        return 0;
    }

    sort(dish.begin(), dish.end());


    for (int i = 0; i < T; i++) {
        dp[0][i] = 0;
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= T - 1; j++) {
            if (j >= dish[i].first) {
                dp[i + 1][j] = max(dp[i][j], dp[i][j - dish[i].first] + dish[i].second);
            } else {
                dp[i + 1][j] = dp[i][j];
            }
        }
    }

    ans = 0;
    for (int i = 0; i < N; i++) {
        ans = max(ans, dp[i][T - 1] + dish[i].second);
    }
    cout << ans << endl;
    return 0;
}