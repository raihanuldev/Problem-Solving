#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string word = "EGYPT";
    int e = 0, g = 0, y = 0,  p = 0, t = 0;



    for (int i = 0; i < s.size(); i++)
    {
        s[i] = toupper(s[i]);
        if (s[i] == 'E')
        {
            e++;
        }
        if (s[i] == 'G')
        {
            g++;
        }
        if (s[i] == 'Y')
        {
            y++;
        }
        if (s[i] == 'P')
        {
            p++;
        }
        if (s[i] == 'T')
        {
            t++;
        }
    }
    int result = min({e,g,y,p,t});
    cout <<result;
    return 0;
}