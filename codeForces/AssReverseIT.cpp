#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string nm,cls;
    char s;
    int id;
};

int main()
{
    int n; 
    cin>>n;
    Student a[n];
    for(int i =0; i<n; i++){
        cin>>a[i].nm >>a[i].cls>>a[i].s>>a[i].id;
    }

    // //output
    for(int i =0 ,j =n-1 ; i < n && j >= 0; i++,j--){
        
    cout<<a[i].nm <<" " << a[i].cls <<" "<< a[j].s <<" "<<a[i].id <<endl;

    }
    // cout<<a[0].nm <<" " << a[0].cls <<" "<< a[2].s <<" "<<a[0].id <<endl;
    // cout<<a[1].nm <<" " << a[1].cls <<" "<< a[1].s <<" "<<a[1].id <<endl;
    // cout<<a[2].nm <<" " << a[1].cls <<" "<< a[0].s <<" "<<a[2].id <<endl;

    /*
    * 0-2
    * 2-0
     */

    return 0;
}