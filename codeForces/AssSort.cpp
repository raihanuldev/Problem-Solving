#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm, cls;
    char s;
    int id;
    int math_marks, eng_marks;
    int total_marks;
};

bool cmp(const Student &l, const Student &r)
{
    
    if (l.total_marks == r.total_marks)
        return l.id < r.id; 
    return l.total_marks > r.total_marks;
}

int main()
{
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
        a[i].total_marks = a[i].math_marks + a[i].eng_marks;  
    }

    
    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " "
             << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }

    return 0;
}
