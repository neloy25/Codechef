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

        bool feq[101] = {false};
        feq[1] = true;
        int pos = 1;
        for(int i = 1; i <= n;i++) {
            if(i % 2) {
                if(pos-(n-i) > 0 && pos-(n-i) < n) pos = pos-(n-i);
                feq[pos-1] = true;
            } else {
                if(pos+(n-i) > 0 && pos+(n-i) < n) pos = pos+(n-i);
                feq[pos-1] = true;
            }
        }

        cout << pos << endl;
    }
    return 0;
}

