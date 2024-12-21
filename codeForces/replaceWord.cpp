// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     cin >> s;
//     string word = "EGYPT";
//     int starting = s.find(word);
//     s.replace(starting, word.length(), " ");
//     cout <<s;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string word = "EGYPT";

    for (int i = 0; i < s.size(); i++)
    {
        int pos = s.find(word, i);  
        if (pos != -1)  
        {
            s.replace(pos, word.length(), " "); 
            i = pos;
        }
    }

    cout << s << endl;
    return 0;
}
