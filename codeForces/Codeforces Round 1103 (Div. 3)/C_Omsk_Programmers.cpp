#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll a, b, x;
    cin >> a >> b >> x;

    if (x == 1)
    { // specail case handekd
        cout << abs(a - b) << "\n";
        return;
    }
    vector<pair<ll, ll>> pathA;
    ll divisions = 0, tempA = a;
    while (tempA)
    { // a re direct 0 te nie astesi
        pathA.push_back({tempA, divisions});
        tempA /= x;
        divisions++;
    }
    pathA.push_back({0, divisions});

    ll ans = LLONG_MAX;
    ll tempB = b;
    divisions = 0;
    while (tempB)
    {
        for (const auto &p : pathA)
        {
            ans = min(
                ans,
                abs(p.first - tempB) + p.second + divisions);
        }

        tempB /= x;
        divisions++;
    }
    
    for (const auto &p : pathA)
    {
        ans = min(
            ans,
            abs(p.first - tempB) + p.second + divisions);
    }

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}