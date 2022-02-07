#include <bits/stdc++.h>
using namespace std;

/**
	@author: jeetscmaker
	contest: Educational Codeforces Round 115 (Div. 2), problem: (A) Computer Game, Accepted
	time: 15ms, memory: 1000KB
*/

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		char a[2][n];
		for(int i = 0; i < 2; i++) {
			for(int j = 0; j < n; j++)
				cin >> a[i][j];
		}
		bool yes = true;
		for(int i = 0; i+1 < n; i++) {
			if(a[0][i+1] == '1' && a[1][i+1] == '1') {
				yes = false;
				break;
			}
		}
		if(yes) 
			cout << "YES";
		else
			cout << "NO";
		cout << '\n';
	}
	return 0;
}