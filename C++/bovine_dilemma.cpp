#include <bits/stdc++.h>
using namespace std;

/*
	@author: jeetscmaker, 
	contest: Good Bye 2020, problem: (A) Bovine Dilemma, Accepted
	time 30ms, memory 1200KB
*/
void solve() {
	short n;
	cin >> n;
	int a[n];
	unordered_set<short> s;
	for(short i = 0; i < n; i++)
		cin >> a[i];
	for(short i = 0; i < n-1; ++i) {
		for(short j = i+1; j < n; j++) {
			s.insert(abs(a[i]-a[j]));
		}
	}
	cout << s.size() << '\n';
}

int main() {
	int t;
	cin >> t;
	for(int i = 1; i<=t; i++) {
		solve();
	}
	return 0;
}