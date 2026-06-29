#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000000;

int spf[MAX + 1];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // smallest prime factor sieve
    for (int i = 0; i <= MAX; i++) spf[i] = i;
    for (int i = 2; i * i <= MAX; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j <= MAX; j += i)
                if (spf[j] == j) spf[j] = i;
        }
    }

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> exps;

        while (n > 1) {
            int p = spf[n];
            int cnt = 0;
            while (n % p == 0) {
                n /= p;
                cnt++;
            }
            exps.push_back(cnt);
        }

        vector<long long> dp(1, 1);

        for (int e : exps) {
            vector<long long> ndp(dp.size() + e, 0);
            for (int i = 0; i < (int)dp.size(); i++) {
                for (int j = 0; j <= e; j++) {
                    ndp[i + j] += dp[i];
                }
            }
            dp.swap(ndp);
        }

        long long ans = 0;
        for (auto x : dp) ans = max(ans, x);

        cout << ans << '\n';
    }

    return 0;
}