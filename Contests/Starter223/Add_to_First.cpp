#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;

    for(int i = 0; i < n; i++) {
        if(a[i] > b[i]) {
            cout << "No\n";
            return;
        }
    }

    int mx = 0;
    for(int i = 0; i < n; i++) {
        if((a[i] != b[i]) && a[i] <= mx) {
            cout << "No\n";
            return;
        }
        mx = max(mx,a[i]);
    }
    cout << "Yes\n";
} 

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}