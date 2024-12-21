#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string target = "Timur";
    sort(target.begin(), target.end());

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        sort(s.begin(), s.end()); 

        if (s == target) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
