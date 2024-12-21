#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    // show output
    for (int i = 1; i <= n; i++)
    {
        cout << a[n-i].name<< " "<< a[n-i].roll <<" "<< a[n-i].marks <<endl;
    }
    // cout << a[n-1].name << " " << a[n-1].roll << " " << a[n-1].marks << endl;
    // cout << a[n-2].name << " " << a[n-1].roll << " " << a[n-1].marks << endl;
    // cout << a[n-3].name << " " << a[n-1].roll << " " << a[n-1].marks << endl;
    // cout << a[n-4].name << " " << a[n-1].roll << " " << a[n-1].marks << endl;
    // cout << a[n-5].name << " " << a[n-1].roll << " " << a[n-1].marks << endl;

    return 0;
}