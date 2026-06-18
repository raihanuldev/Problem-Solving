
/*************************************************************
    بسم الله الرحمن الرحيم
    "And He found you lost and guided you."
        — Al-Qur'an (93:7)

    Note: All knowledge belongs to Allah, the Most High.

    Author   : Raihanul Islam Sharif
    Contact  : rihanulislam2015@gmail.com
*************************************************************/

#include <bits/stdc++.h>
using namespace std;

// Type Aliases
using ll = long long;
using ull = unsigned long long;
using ld = long double;

// Constants
const int INF_INT = 1e9;
const ll INF_LL = 1e18;
const int MOD = 1e9 + 7;
const int MXN = 2e5 + 5; // Maximum N (problem dependent)

// Utility Functions

// Fast power (a^b % mod)
ll modpow(ll a, ll b, ll mod = MOD)
{
    ll res = 1;
    a %= mod;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

// GCD
ll gcdll(ll a, ll b)
{
    while (b)
    {
        ll t = a % b;
        a = b;
        b = t;
    }
    return a;
}

// LCM
ll lcmll(ll a, ll b)
{
    return a / gcdll(a, b) * b;
}

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    string cur;

    for (char c : s)
    {
        if (!cur.empty() && cur.back() == c)
        {
            cur.pop_back();
        }
        else
        {
            cur.push_back(c);
        }
    }

    cout << (cur.empty() ? "YES\n" : "NO\n");
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

/**
 * is there mandatory to select same chars? if not then simply count size.
 * if yes then use a map<char,int>
 *  and iterate this map value is mod by 2 . after all if true then yes
 * byebye
 * b-2
 * y-2
 * e-2
 */
