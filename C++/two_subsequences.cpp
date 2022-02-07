#include <bits/stdc++.h>
using namespace std;

/*
	@author: jeetscmaker, 
	contest: Codeforces Round #751 (Div. 2), problem: (A) Two Subsequences, Accepted
*/

void solve() {
	string s;
	cin >> s;
	int n = s.length();
	char a[n];
	for(int i = 0; i<n; i++)
		a[i] = s[i];
	sort(a, a+n);
	cout << a[0] << " ";
	int index = 0;
	for(int i = 0; i<n; i++) {
		if(s[i] == a[0]) {
			index = i;
			break;
		} else {
			cout << s[i];
		}
	}
	for(int i = index+1; i<n; i++)
		cout << s[i];
	cout << "\n";
}

int main () {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}