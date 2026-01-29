#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;

    int k = 1, res = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] <= k) {
            res++;
            k = max(k, v[i] + 1);
        }
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}