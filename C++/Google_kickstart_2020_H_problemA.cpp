#include <bits/stdc++.h>
using namespace std;

// Google Kickstart 2020 Round-H, problem A, status: accepted.

void solve(int t) {
	int64_t n, k, s;
	cin >> n >> k >> s;
	int64_t least = min(k+ 2*(k-s) + (n-k), k+n);
	cout << "Case #" << t << ": " << least << endl;
}

int main() {
	int t;
	cin >> t;
	for(int i = 1; i<=t; i++) {
		solve(i);
	}
	return 0;
}