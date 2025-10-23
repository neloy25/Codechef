#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;


    int i = 0;
    int block = 0;
    while(i < n){
        if(s[i] == '1') {
            if(block != 0) {
                cout << "Yes\n";
                return;
            }
            block++;
            int len = 0;
            while(s[i] == '1') {
                len++;
                i++;
            }

            if(len != 2 && len != 3) {
                cout << "Yes\n";
                return;
            }
        } else {
            i++;
        }
    }
    if(block == 0) cout << "Yes\n";
    else cout << "No\n";

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

