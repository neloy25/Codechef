#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,x,k;
    cin >> n >> x >> k;

    int can_go = n - x;

    int res = x % k;
    if(can_go >= (k - res)) res = min(res, k - res);
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}