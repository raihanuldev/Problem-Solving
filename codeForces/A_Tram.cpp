#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcase; cin>>tcase;
    int sum =0;
    int highest =0;
    while(tcase--){
        int a,b;
        cin>>a;
        cin>>b;
        sum-=a;
        sum+=b;
        if(sum>highest){
            highest = sum;
        }

    }
    cout<<highest<<endl;
    return 0;
}