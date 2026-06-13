#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tcase; cin>>tcase;
    while(tcase--){
        int n; cin>>n;
        vector<int>h(n);
        for(int i=0;i<n;i++) cin>>h[i];
        auto maxElement = max_element(h.begin(),h.end());
        int t = *maxElement+1;
        vector<int>added_height;
        for(int i=0;i<n;i++){
            int k = t - h[i];
            added_height.push_back(k);
        }
        auto largest = max_element(added_height.begin(),added_height.end());
        int ans = *largest;
        cout<<ans<<endl;
    }
    return 0;
}