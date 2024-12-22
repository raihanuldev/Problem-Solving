#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n; 
    
    vector<int> pi(n); 
    vector<int> result(n);

    // ইনপুট নেওয়া
    for (int i = 0; i < n; i++) {
        cin >> pi[i];
    }

    for (int giver = 0; giver < n; giver++) {
        int receiver = pi[giver]; 
        result[receiver - 1] = giver + 1; 
    }

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
