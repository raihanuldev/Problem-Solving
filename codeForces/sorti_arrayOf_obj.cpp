#include <bits/stdc++.h>
using namespace std;


class gf
{
    public:
    string name;
    string cls;
    int age;
    string totalTime;
    string duiLineaboutHer;
};
bool cmp(gf l,gf r)
{
    if(l.age > r.age) return true;
    else{
        return false;
    }
}

int main()
{
    int n;
    cin>>n;
    gf a[n];

    for(int i = 0; i<n; i++){
        cin.ignore();
        cin>>a[i].name >> a[i].cls >> a[i].age >>a[i].totalTime>>a[i].duiLineaboutHer;

    }

    //now sorting korbo age dia. jar age beshi sei age asbe
    sort(a,a+n,cmp);

    for(int i = 0; i<n; i++){
        cout<<a[i].name <<" " << a[i].cls<<" " << a[i].age <<" "<< a[i].totalTime <<" "<< a[i].duiLineaboutHer <<endl;
        
    }
    return 0;
}