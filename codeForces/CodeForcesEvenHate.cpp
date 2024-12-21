#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcase;
    cin >>tcase;
    for(int i =0; i<tcase; i++)
    {
        int n;
        cin >>n;
        int a[n];
        int even = 0,odd= 0;
        for(int j =0; j<n;j++){
            cin >> a[j];
            if(a[j]%2==0){
                even++;
            }else{
                odd++;
            }
        }
        // Check if it's impossible
        if (abs(even - odd) % 2 != 0) {
            cout << -1 << endl;
        } else {
            cout << abs(even - odd) / 2 << endl;
        }

    }
    return 0;
}
