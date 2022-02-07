#include <bits/stdc++.h>
using namespace std;

/**
	@author: jeetscmaker, 
	contest: Codeforces Round #338 (Div. 2), problem: (A) Bulbs, Accepted
	time: 15ms, memory: 100KB
*/

int main() {
	int n, m;
	cin >> n >> m;
	int x;
	set<int> s;
	for(int i = 1; i<= n; i++) {
		cin >> x;
		for(int j = 1; j <=x; j++) {
			int k;
			cin >> k;
			s.insert(k);
		}
	}
	if(s.size() == m)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}