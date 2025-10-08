#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> v(n + 1);
        ll sum = 0;

        for (int i = 1; i <= n; ++i) {
            cin >> v[i];
            sum += v[i];
        }

        if (n == 2) {
            ll w = (2 * min(v[1], v[2]));
            cout << (sum - w) << '\n';
            continue;
        }

        vector<ll> w(n + 1, 0);
        for (int i = 1; i <= n - 1; ++i)
            w[i] = (2 * min(v[i], v[i + 1]));

        vector<ll> dp(n + 1, 0);
        for (int i = 1; i <= n; ++i) {
            dp[i] = dp[i - 1];
            if (i >= 2) {
                ll prev = 0;
                if (i - 3 >= 0) prev = dp[i - 3];
                dp[i] = max(dp[i], (prev + w[i - 1]));
            }
        }


        ll ans = (sum - dp[n]);
        cout << ans << '\n';
    }

    return 0;
}
