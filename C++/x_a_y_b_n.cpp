#include <bits/stdc++.h>
using namespace std;
/**
	By jeetscmaker, 
	contest: Codeforces Round #451 (Div. 2), problem: (B) Proper Nutrition, Accepted
*/
int main () {
	int64_t n, a, b;
	cin >> n >> a >> b;
	bool yes = false;
	int64_t x = 0;
	int64_t p = n - x*a;
	while(p >= 0) {
		if( p%b  == 0)
		{
			yes = true;
			cout << "YES\n";
			cout << x << " " << p/b;
			break;
		}
		x++;
		p = n - x*a;
	}
	if(yes == false)
		cout << "NO\n";
	return 0;
}