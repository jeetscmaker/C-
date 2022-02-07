#include <bits/stdc++.h>
using namespace std;

/**
	@author: jeetscmaker
	contest: Codeforces Round #225 (Div. 2), problem: (A) Coder, Accepted, time 61ms.
	This program showed TLE(Time Limit Exceeded) exception in Java language.
*/

void print_matrix(int n) {
	for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if ((i + j) % 2 == 0)
					cout << ("C");
				else
					cout << (".");
			}
			cout << endl;
		}
}

int main() {
	int n;
	cin >> n;
	if (n % 2 == 0) {
			cout << (n * n / 2) << endl;
			print_matrix(n);
		} else {
			cout << ((n * n + 1) / 2) << endl;
			print_matrix(n);
		}
	return 0;
}