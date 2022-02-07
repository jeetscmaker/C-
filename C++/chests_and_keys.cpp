#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	return (b == 0 ? a : gcd(b, a%b));
}
 
int lcm (int a, int b) {
	return (a*b)/gcd(a,b);
}
// contest: Codeforces Round #554 (Div. 2), problem: (A) Neko Finds Grapes, Accepted
int main() {
	int n, m;
	cin >> n >> m;
	long a[n], b[m];
	int count_even_a = 0, count_even_b = 0;
	int count_odd_a = 0, count_odd_b = 0;
	for(int i = 0; i<n; i++){
		cin >> a[i];
		if(a[i]%2 == 0)
			count_even_a++;
		else
			count_odd_a++;
	}
	for(int i = 0; i<m; i++){
		cin >> b[i];
		if(b[i]%2 == 0)
			count_even_b++;
		else
			count_odd_b++;
	}
	int ans = min(count_even_a,count_odd_b) + min(count_even_b,count_odd_a);
	cout << ans;
	return 0;
}