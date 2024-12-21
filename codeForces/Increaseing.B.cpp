#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcase;
    cin>>tcase;
    
    for(int i =0; i<tcase; i++)
    {
        int n;
        cin >>n;
        int a[n];
        for(int i = 0; i<n; i++)
        {
            cin >> a[i];
        }

        sort(a,a+n);

        bool isStrictlyIncreasing = true;
        
        for (int i = 0; i < n - 1; i++) {
            if (a[i] >= a[i + 1]) {
                isStrictlyIncreasing = false;
                break;
            }
        }

        if (isStrictlyIncreasing) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}