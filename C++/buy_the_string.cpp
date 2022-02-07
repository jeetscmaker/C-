#include<bits/stdc++.h>
using namespace std;
// contest: Codeforces Round #684 (Div. 2), problem: (A) Buy the String, Accepted
inline void solve(){
	int n, c0, c1, h;
	cin >> n >> c0 >> c1 >> h;
	string s;
	cin >> s;
	int count0 = 0, count1 = 0;
	for(int i=0; i<n; i++) {
		if(s[i] == '0') count0++;
		else count1++;
	}
	int pricec1 = 0, pricec0 = 0;
	if(c0 == c1)
	{
		pricec0 = c0*count0;
		pricec1 = c1*count1;
	}
	else if(c0 < c1) {
		if(c0+h < c1) {
			pricec1 = count1 * (c0+h);
		}
		else 
			pricec1 = count1*c1;
		pricec0 = c0*count0;
	}
	else {
		if(c1+h < c0) {
			pricec0 = count0*(c1+h);
		}
		else
			pricec0 = count0*c0;
		pricec1 = c1*count1;
	}
	cout << (pricec0+pricec1) << endl;
}

int main(){
	short t;
	cin >> t;
	while(t--)
		solve(); 
	return 0;
}