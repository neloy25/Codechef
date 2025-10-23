#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n,x,k;
    cin >> n >> x >> k;

    int big = 0;
    for(int i = 0; i < n;i++) {
        int val;
        cin >> val;
        if(val > x) {
            int op = (val + 99 - x) / 100;
            if(op > k) big++;
        }
    }
    if(big <= k) big = 0;
    else big-=k;
    cout << big + 1 << endl;
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

