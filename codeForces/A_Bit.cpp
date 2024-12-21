#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;

    int x = 0; 
    for (int i = 0; i < n; i++) {
        string op;
        cin >> op;

        if (op == "++X" || op == "X++") {
            x++;
        } else if (op == "--X" || op == "X--") {
            x--;
        }
    }

    cout << x << endl;
    return 0;
}