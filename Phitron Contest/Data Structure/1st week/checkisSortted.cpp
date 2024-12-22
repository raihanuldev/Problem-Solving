#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcase; cin>>tcase;
    while(tcase--)
    {
        int n; cin>>n;
    int arr[n];
    for(int i =0; i<n;i++)
    {
        cin>>arr[i];
    }
    //check is sorted or not;
    int flag =0;
    for(int i =0; i<n-1;i++)
    {   
       
        if(arr[i]>arr[i+1]){
            flag =1;
            break;
        }
    }
    if(flag==1){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
    cout<<endl;

    }
    return 0;
}