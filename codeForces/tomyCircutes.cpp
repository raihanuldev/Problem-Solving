#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcase;
    cin >> tcase;
    for(int i =0; i<tcase; i++){
        int a,b,c;
        cin>> a >> b >>c;
        if(a+b >=10 || b+c >=10 ||a+c>=10){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}