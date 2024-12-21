#include <iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int h, m;
        cin >> h >> m;
        
        int remaining_minutes = 1440 - (h * 60 + m);
        cout << remaining_minutes << endl;
    }
    return 0;
}
