#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int result1 = a + b + c;
    int result2 = a * b * c;
    int result3 = a + (b * c);
    int result4 = (a + b) * c;
    int result5 = a * (b + c);

    int max_result = max({result1, result2, result3, result4, result5});

    cout << max_result << endl;
    return 0;
}
