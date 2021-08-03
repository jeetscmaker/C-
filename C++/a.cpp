#include <bits/stdc++.h>
using namespace std;

// Codeforces Round #690 (Div. 3) B. Last Year's Substring

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a%b);
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		if(s[0] == '2' && s[n-1] == '0' && s[n-2] == '2' && s[n-3] == '0'
			|| s[0] == '2' && s[1] == '0' && s[n-1] == '0' && s[n-2] == '2'
			|| s[0] == '2' && s[1] == '0' && s[2] == '2' && s[n-1] == '0'
			|| s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0'
			|| s[n-1] == '0' && s[n-2] == '2' && s[n-3] == '0' && s[n-4] == '2'
		)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
    return 0;
}