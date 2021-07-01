#include <bits/stdc++.h>
using namespace std;
// contest: Educational Codeforces Round 110 (Rated for Div. 2), problem: (A) Fair Playoff
int main() {
	int t;
	cin >> t;
	while(t--){
		short s1,s2,s3,s4;
		cin >> s1 >> s2 >> s3 >> s4;
		if (min(s1,s2) > max(s3,s4) || max(s1,s2) < min(s3,s4))
		{
			cout << "NO" << endl;
		} 
		else
			cout << "YES" << endl;
	}
	return 0;
} 