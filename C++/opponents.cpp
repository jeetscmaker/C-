#include <bits/stdc++.h>
using namespace std;

/*
	@author: jeetscmaker, 
	contest: Codeforces Round #360 (Div. 2), problem: (A) Opponents, Accepted
*/

void solve() {
	
}

int main () {
	int n, t;
	cin >> n >> t;
	int max_count = 0;
	while(t--) {
		string s;
		cin >> s;
		int count1 = 0;
		for(int i = 0; i<s.length(); i++) {
			if(s[i] == '1')
				count1++;
		}
		int win_count = 0;
		if(count1 != s.length()) {
			win_count++;
		}
		else {
			max_count = max(max_count, win_count);
			win_count = 0;
		}
	}
	max_count = max(max_count, win_count);
	cout << max_count;
	return 0;
}