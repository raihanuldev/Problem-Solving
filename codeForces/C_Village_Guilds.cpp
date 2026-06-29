#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<vector<int>> child(n + 1);

        for (int i = 2; i <= n; i++) {
            int p;
            cin >> p;
            child[p].push_back(i);
        }

        map<vector<int>, int> mp;
        int nxt = n + 1;

        vector<vector<int>> id(n + 1);

        ll ans = n; // all singleton guilds

        // singleton ids
        for (int i = 1; i <= n; i++)
            id[i].push_back(i);

        function<void(int)> dfs = [&](int v) {
            for (int u : child[v]) dfs(u);

            int h = 1;
            while (true) {
                vector<int> cur;

                for (int u : child[v]) {
                    if ((int)id[u].size() > h - 1)
                        cur.push_back(id[u][h - 1]);
                }

                if (cur.empty()) break;

                sort(cur.begin(), cur.end());

                auto it = mp.find(cur);
                if (it == mp.end()) {
                    mp[cur] = nxt++;
                    id[v].push_back(mp[cur]);
                    ans++;
                } else {
                    id[v].push_back(it->second);
                }

                h++;
            }
        };

        dfs(1);

        cout << ans << "\n";
    }

    return 0;
}