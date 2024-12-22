#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    vector<long int> PrefixArr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        PrefixArr[i] = PrefixArr[i - 1] + arr[i - 1];
    }

    for(int i =n; i>0;i--)
    {
        cout << PrefixArr[i] << " ";

    }

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << PrefixArr[i] << " ";
    // }
    cout << endl;

    return 0;
}
