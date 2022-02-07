#include <bits/stdc++.h>
using namespace std;
 // By jeetscmaker, contest: Codeforces Round #755 (Div. 2, based on Technocup 2022 Elimination Round 2), 
 // problem: (B) Coloring Rectangles, Pretests passed.
void solve () {
	int n, m;
	cin >> n >> m;
	if((n*m)%3 == 0)
		cout << (n*m)/3;
	else
		cout << ((n*m)/3 + 1);
	cout << endl;
}
int main() {
  int t;
  cin >> t;
  while (t--) 
	  solve();
}