#include <iostream>
#include <string>
using namespace std;

int main()
{
    int tcase;
    cin >> tcase;
    cin.ignore();
    while (tcase--)
    {
        string s, x;
        cin >> s;
        cin >> x;
        for (int pos = 0; (pos = s.find(x, pos)) != -1; pos += 1)
        {
            s.replace(pos, x.size(), "#");
        }
        cout << s << endl;
    }

    return 0;
}
