#include <bits/stdc++.h>
using namespace std;

/*
	@author: jeetscmaker, 
	contest: Educational Codeforces Round 106 (Rated for Div. 2), problem: (A) Domino on Windowsill, Accepted
*/

void solve() {
	int n, k1, k2, w, b;
	cin >> n >> k1 >> k2 >> w >> b;
	int whites = (k1+k2)/2;
	int blacks = (2*n - k1 - k2)/2;
	if(w <= whites && b <= blacks)
		cout << "YES";
	else
		cout << "NO";
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