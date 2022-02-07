#include <bits/stdc++.h>
using namespace std;

int64_t gcd(int64_t a, int64_t b) {
	return (b == 0 ? a : gcd(b, a%b));
}
 
int64_t lcm (int64_t a, int64_t b) {
	return (a*b)/gcd(a,b);
}

/**
 @author: Jitendra
 contest: Codeforces Round #235 (Div. 2), problem: (C) Team
 I submitted the exactly same solution in Java Lanuguage(JDK 11), and it showed
 TLE(Time limit exceeded). But The same program ran swiftly in C++.
 I am thinking how pathetic Java is? Specially for Competitive programming, Java 
 is a bad choice.
 My Java solution source code id is : 136816275
 My C++ solution source code id is: 136817064
*/
int main() {
	int n, m;
	cin >> n >> m;
	int p = n, q = m;
	if((n > (m+1)) || (m > (2*n + 2))) {
	    cout << -1;
		return 0;
	}

	vector<int> v;
	if(n>m || n==m) { // number of 0 is greater than number of 1.
		int flag = 0;
		for(int i=1; i <= m+n; i++) {
			if(flag == 0) {
				v.push_back(0);
				flag = 1;
			} else {
				v.push_back(1);
				flag = 0;
			}
		}
	}
	else { // number of 1 is greater than number of 0.
		while (m > 0 || n > 0) {
				if (m >= 2) {
					v.push_back(1);
					v.push_back(1);
					m = m - 2;
				} else if (m == 1) {
					v.push_back(1);
					m = m - 1;
				}
				if (n > 0) {
					v.push_back(0);
					n = n - 1;
				}
				if (m == n) {
					for (int i = 1; i <= m + n; i++) {
						v.push_back(1);
						v.push_back(0);
					}
					break;
				}
			}
	}
	for(int i = 0; i<p+q ; i++)
		cout << v[i];
	return 0;
}