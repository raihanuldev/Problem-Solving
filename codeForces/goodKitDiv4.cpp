#include <bits/stdc++.h>
using namespace std;

int main() {
    int tcase;
    cin >> tcase; 

    while (tcase--) {
        int n;
        cin >> n; 
        int a[n]; 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long maxProduct = 0; 

        for (int i = 0; i < n; i++) {
            long long product = 1; 
            for (int j = 0; j < n; j++) {
                if (j == i) {
                   
                    product *= (a[j] + 1);
                } else {
                   
                    product *= a[j];
                }
            }
            
            maxProduct = max(maxProduct, product);
        }

        cout << maxProduct << endl; 
    }

    return 0;
}
