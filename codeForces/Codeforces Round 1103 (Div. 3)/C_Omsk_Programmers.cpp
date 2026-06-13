#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<pair<ll,ll>> getStates(ll start, ll x) {
    vector<pair<ll,ll>> v;

    ll cur = start;
    ll steps = 0;

    while (true) {
        v.push_back({cur, steps});

        if (cur == 0) break;

        cur /= x;
        steps++;

        if (steps > 40) break;
    }

    return v;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll a, b, x;
        cin >> a >> b >> x;

        auto A = getStates(a, x);
        auto B = getStates(b, x);

        ll ans = LLONG_MAX;

        for (int i = 0; i < (int)A.size(); i++) {
            ll va = A[i].first;
            ll da = A[i].second;

            for (int j = 0; j < (int)B.size(); j++) {
                ll vb = B[j].first;
                ll db = B[j].second;

                if (va == vb) {
                    ll costA = da + max(0LL, a - va);
                    ll costB = db + max(0LL, b - vb);
                    ans = min(ans, costA + costB);
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}