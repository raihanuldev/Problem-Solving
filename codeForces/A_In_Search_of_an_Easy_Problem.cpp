#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int flag = 0;
    while(n--)
    {
        int i; cin>>i;
        if(i==1)
        {
            flag =1;
            break;
        }
    }
    if(flag ==1){
        cout<<"HARD";
    }else{
        cout<<"EASY";
    }
    return 0;
}