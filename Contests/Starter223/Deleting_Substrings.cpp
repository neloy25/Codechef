


#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;
    string s,t;
    cin >> s >> t;

    vector<int> res;
    res.push_back(-1);
    int ans = 0;
    auto ok = [&]() {
        int i = 0, j = 0;
        while(i < n && j < m) {
            if(s[i] != t[j]) i++;
            else {
                res.push_back(i);
                i++;
                j++;
            }
        }
        res.push_back(n);
        for(int val : res) {
            cout << val << " ";
        }
        cout << endl;
        for(int i = 1; i < res.size(); i++) {
            // cout << res[i] - res[i - 1] << endl;
            if(res[i] - res[i - 1] > 1) ans++;
        }
        // if(n - res[res.size() - 1] > )
        if(i >= n && j < m) return false;
        else return true;
    };


    // cout << ans << endl;
    if(!ok()) cout << -1 << endl;
    else cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}