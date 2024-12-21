#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcase;
    cin>>tcase;

    while(tcase--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int biggest = 97;
        for(int i =0; i <n; i++){
            if(int(s[i])>biggest){
                biggest = s[i];
            }
        }
        int result = biggest-96;
        cout << result << endl;
    }
    return 0;
}