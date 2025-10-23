#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int alter = 0;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] != s[i + 1]) alter++;
        }

        if (alter >= 2) cout << "Alice\n";
        else if (alter == 1) {
            if ((s == "010") || (s == "101")) cout << "Alice\n";
            else cout << "Bob\n";
        }
        else cout << "Bob\n";
    }
}
