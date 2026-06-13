#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tcase; cin >> tcase;

    while (tcase--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> vis(n, 0);

        bool ok = true;

        for (int i = 0; i < n; i++) {
            if (vis[i]) continue;

            int cnt = 0;
            vector<int> c;

            for (int j = i; j < n; j += k) {
                vis[j] = 1;
                c.push_back(j);
                if (s[j] == '1') cnt++;
            }

            if (cnt % 2 != 0) ok = false;
    
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}
/***
 * 4 2
    1010

 * 
 * */ 