	#include <bits/stdc++.h>

	using namespace std;
/**
 * contest: Codeforces Round #322 (Div. 2), problem: (A) Vasya the Hipster
 */
	int main() {
		 int a,b;
		 cin>>a>>b;
		 cout<<(a>b?b:a) << " " << (a>b?(a-b)/2:(b-a)/2);
		 return 0;	
	}
		
	