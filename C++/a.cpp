#include <bits/stdc++.h>
using namespace std;

// contest: Educational Codeforces Round 83 (Rated for Div. 2), problem: (A) Two Regular Polygons

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a%b);
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		short n,m;
		cin >> n >> m;
		if(n<6) {
			cout << "NO" << endl;
			continue;
		}
		if(n%m == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
    return 0;
}