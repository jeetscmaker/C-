#include <bits/stdc++.h>
using namespace std;

/*
	@author: jeetscmaker, 
	contest: Codeforces Round #360 (Div. 2), problem: (B) Lovely Palindromes, Accepted
*/
string reverse(string s) {
	int n = s.length();
	for(int i=0, j=n-1; i<j; i++, j--)
		swap(s[i],s[j]);
	return s;
}
int main () {
	string s;
	cin >> s;
	cout << s + reverse(s);
	return 0;
}