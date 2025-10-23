#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<ll> v1(n), v2(m);
        for (ll &x : v1) cin >> x;
        for (ll &x : v2) cin >> x;

        ll sum = 0;
        map<ll, ll> cnt1, cnt2;
        set<ll> unq;

        for (ll x : v1) {
            cnt1[x]++;
            unq.insert(x);
            sum += x;
        }

        for (ll x : v2) {
            cnt2[x]++;
            unq.insert(x);
            sum += x;
        }

        ll left = 0;

        for (ll v : unq) {
            ll a = cnt1[v];
            ll b = cnt2[v];

            ll rem_a = 0;
            if(a - (n - b) > 0) rem_a = a - (n - b);

            ll rem_b = 0;
            if(b - (n - a) > 0) rem_b = b - (n - a);

            ll s = max(rem_a , rem_b);
            left += s * v;
        }

        ll ans = sum - 2 * left;
        cout << ans << '\n';
    }

    return 0;
}
