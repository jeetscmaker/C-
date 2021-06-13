#include <bits/stdc++.h>
using namespace std;
/**
 * contest: Codeforces Round #638 (Div. 2), problem: (A) Phoenix and Balance
 * */
int main() {
	int t;
	cin>>t;
	while(t--){
		short n;
		cin>>n;
		long long res = pow(2, (n/2)+1) - 2;
		cout<<res<<endl;
	}
	return 0;
}