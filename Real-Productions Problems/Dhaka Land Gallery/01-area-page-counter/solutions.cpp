#include <bits/stdc++.h>
using namespace std;

int n, q;
vector<vector<int>> children;
vector<long long> plot;

long long dfs(int v) {
    long long s = plot[v];
    for (int c : children[v]) s += dfs(c);
    return s;
}

int main() {
    cin >> n >> q; //5 5
    children.assign(n + 1, {});
    plot.assign(n + 1, 0);

    for (int i = 2; i <= n; i++) {
        int p;
        cin >> p;
        children[p].push_back(i);
    }
    for (int i = 1; i <= n; i++) cin >> plot[i];

    while (q--) {
        int type, v;
        cin >> type >> v;
        if (type == 1) {
            long long x;
            cin >> x;
            plot[v] += x;
        } else {
            cout << dfs(v) << "\n";
        }
    }
}