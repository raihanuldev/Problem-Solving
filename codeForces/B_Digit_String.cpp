#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin >> t;
	while( t -- ){
		long long odd = 0 , ans = 0 , res = 0;
		string s;
		cin >> s;
		for( int i = 0; i < s.size(); i ++ ){
			if( s[i] == '4' ){
				ans ++ ;
			}
			if( s[i] == '1' || s[i] == '3' ){
				odd ++;
			}
			if( s[i] == '2' ){
				res = min( odd , res + 1);
			}
		}
		cout << ans + res << endl;
	}
}