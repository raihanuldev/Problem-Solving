#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcase;
    cin >> tcase;
    for(int i =0; i<tcase; i++){
        string s;
        cin>>s;
        if(s == "abc" || s == "acb" || s == "bac" || s == "cba"){
            printf("YES\n");
            
        }else{
            printf("NO\n");
        }
        
    }
    return 0;
}