#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    // a*a+b = n
    // a+ b*b =m

    int pair =0;
    for(long long a=0; a*a <=n;a++){
        long long b = n-a*a;
        if(a+b * b==m){
            pair++;
        }
    }
    cout<<pair<<endl;
    return 0;
}