#include <bits/stdc++.h>
using namespace std;

// contest: Codeforces Round #615 (Div. 3), problem: (A) Collecting Coins
 
int main() {    
    long a, b, c, n;
    int t;
    cin >> t;
    while(t--) {
       int a[3], n;
		cin >> a[0] >> a[1] >> a[2] >> n;
		sort(a, a + 3);
		n -= 2 * a[2] - a[1] - a[0];
		if (n < 0 || n % 3 != 0) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
    }
    return 0;
}