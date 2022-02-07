#include <bits/stdc++.h>
using namespace std;
 // By jeetscmaker, contest: Codeforces Round #755 (Div. 2, based on Technocup 2022 Elimination Round 2), 
 // problem: (A) Mathematical Addition, Pretests passed.
void solve () {
	int n;
	cin >> n;
	int a[n], b[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < n; i++)
		cin >> b[i];
	sort(a, a+n);
	sort(b, b+n);
	bool yes = true;
	for(int i = 0; i < n; i++)
	{
		if((b[i]-a[i] > 0) || (b[i]-a[i] < 0)) {
			yes = false;
			break;
		}
	}
	if(yes)
		cout << "YES";
	else
		cout << "NO";
	cout << "\n";
}
int main() {
  int t;
  cin >> t;
  while (t--) 
	  solve();
}