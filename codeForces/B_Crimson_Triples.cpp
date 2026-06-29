#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

void solve()
{
    int n;
    cin >> n;

    int64 answer = 0;

    for (int b = 1; b <= n; b++)
    {
        int64 m = n / b;
        answer += m * m;
    }
    cout << answer << '\n';
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