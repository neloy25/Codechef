#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int f = -1,b = -1;

        for(int i = 0; i < n; i++) {
            if(s[i] == '1') {
                if(f == -1) {
                    f = i;
                } else {
                    b = i;
                }
            } 
        }

        if(f == -1 || b == -1) {
            cout << 0 << endl;
            continue;
        }

        int res = 0;
        for(int i = f; i <= b;i++) {
            if(s[i] == '0') res++;
        }

        cout << res << endl;
    }
    return 0;
}

