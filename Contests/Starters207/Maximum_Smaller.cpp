#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        vector<int> feq(n + 1,0);
        for(int i = 1; i <=n;i++) {
            cin >> v[i];
            feq[v[i]]++;
        }

        bool single = false;
        for(int i = 1; i <= n; i++) {
            if(feq[i] == 1) {
                single = true;
                break;
            }

        }

        vector<int> res(n + 1);
        if(single) {
            vector<pair<int, int>> p;

            for (int i = 1; i <= n; i++) {
                p.push_back({v[i], i});
            }
            sort(p.begin(), p.end(),greater<pair<int,int>>());  

            for (int i = 0; i < n - 1; i++) {
                res[p[i].second] = p[i + 1].second;
            }
            res[p[n - 1].second] = p[0].second; 
        } else {
            vector<vector<int>> idx(n + 1);
            for(int i = 1; i <= n; i++) {
                idx[v[i]].push_back(i);
            }

            for(int i = 1; i<= n; i++) {
                if(idx[i].size() > 0) {
                    int l = idx[i].size();
                    for (int j = 0; j < l - 1; j++) {
                        res[idx[i][j]] = idx[i][j + 1];
                    }
                    res[idx[i][l - 1]] = idx[i][0];
                }
            }
        }

        int score = 0;
        for(int i = 1; i <= n;i++) {
            if(v[res[i]] <= v[i]) {
                score++;
            }
        }

        cout << score << endl;
        for (int i = 1; i <= n; i++) {
            cout << res[i] << " ";
        }
        cout << '\n';
        
    }
    return 0;
}
