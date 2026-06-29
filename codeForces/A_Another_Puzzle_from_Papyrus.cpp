#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, c;
    cin >> n >> c;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    const int INF = 1e9;
    int cost1 = 0;
    bool ok1 = true;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i])
        {
            ok1 = false;
            break;
        }
        cost1 += a[i] - b[i];
    }

    if (!ok1)
        cost1 = INF;
    vector<int> A = a;
    vector<int> B = b;

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int cost2 = c;
    bool ok2 = true;
    for (int i = 0; i < n; i++)
    {
        if (A[i] < B[i])
        {
            ok2 = false;
            break;
        }
        cost2 += A[i] - B[i];
    }

    if (!ok2)
        cost2 = INF;

    int ans = min(cost1, cost2);

    if (ans == INF)
        cout << -1 << '\n';
    else
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