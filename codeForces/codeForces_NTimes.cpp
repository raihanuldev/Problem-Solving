#include <bits/stdc++.h>
using namespace std;

void Ntimes(int n, char c) {
    for (int i = 0; i < n; i++) {
        if (i > 0) cout << " ";
        cout << c;
    }
    cout << endl; 
}

int main() {
    int tcase;
    cin >> tcase;
    for (int i = 0; i < tcase; i++) {
        int n;
        char c;
        cin >> n >> c;

       
        // cout << "Debug: n = " << n << ", c = " << c << endl;

        Ntimes(n, c);
    }
    return 0;
}
