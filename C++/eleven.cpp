#include <bits/stdc++.h>
using namespace std;

/**
	@author: jeetscmaker, 
	contest: Codeforces Round #459 (Div. 2), problem: (A) Eleven, Accepted
	time: 15ms, memory: 0KB
*/

int main() {
	int n;
	cin >> n;
	char a[n];
	for(int i = 0; i < n ; i++) 
		a[i] = 'o';
	int x = 1, y = 1;
	a[0] = 'O', a[1] = 'O';
	for(int i = x+y; i <= n; ) {
		a[i-1] = 'O';
		x = y;
		y = i;
		i = x+y;
	}
	for(int i = 0; i < n; i++) 
		cout << a[i];
	return 0;
}