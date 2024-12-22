#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    int flag = 0;
    for(int i =0; i<n;i++){
        for(int j =i+1; j<n;j++)
        {
            if(arr[i]==arr[j]){
                flag =1;
                break;
            }
        }
    }
    if(flag==1)
    {
        cout<<"YES";
    }else{
        cout <<"NO";
    }
    return 0;
}