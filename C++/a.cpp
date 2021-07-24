#include <bits/stdc++.h>
using namespace std;

// contest: Codeforces Round #698 (Div. 2), problem: (A) Nezzar and Colorful Balls

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a%b);
}

int main(){
	short t;
	cin >> t;
	while(t--){
		short n;
		cin >> n;
		short a[n];
		short current_occurrence = 1, max_occurrence = 0;
		for(short i = 0; i < n; i++) {
			cin >> a[i];
		}
		for(short i = 0; i+1 < n; i++) {
			if(a[i] == a[i+1]) {
				current_occurrence++;
			} else {
				max_occurrence = current_occurrence > max_occurrence ? current_occurrence : max_occurrence;
				current_occurrence = 1;
			}
		}
		max_occurrence = current_occurrence > max_occurrence ? current_occurrence : max_occurrence;
		cout << max_occurrence << endl;
	}
	return 0;
}