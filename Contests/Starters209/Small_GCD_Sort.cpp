#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    deque<int> dq;

    for(int i = sqrt(n); i >= 1;i--) {
        if(n % i == 0) {
            if(i == (n / i)) dq.push_back(i);
            else {
                dq.push_front(n / i);
                dq.push_back(i);
            }
        }
    }

    vector<int> vis(n + 1,false);
    for(int val : dq) {
        int i = val;
        while(i <= n) {
            if(vis[i] == false) {
                cout << i << " ";
                vis[i] = true;
            }
            i += val;
        }
    }

    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

