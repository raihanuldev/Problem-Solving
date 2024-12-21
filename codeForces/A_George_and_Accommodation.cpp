#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int count =0;
    for(int i =1; i<=n;i++){
        int present,quantity;
        cin>>present>>quantity;
        int now = quantity-present;
        if (quantity - present >= 2) {
            count++; 
        }

    }
    cout<<count;
    return 0;
}