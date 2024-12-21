#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcase;
    cin >> tcase;
    while (tcase--)
    {
        string s;
        cin >> s;

        // Convert the string to uppercase for consistent comparison
        transform(s.begin(), s.end(), s.begin(), ::toupper);

        if (s == "YES")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}