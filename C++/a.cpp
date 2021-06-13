#include <bits/stdc++.h>
using namespace std;
/**
 * contest: Codeforces Round #644 (Div. 3), problem: (B) Honest Coach
 * */
int main() {
	int t;
	cin>>t;
	while(t--){
		short n;
		cin>>n;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		sort(a, a+n);
		int min = 1001;
		for (int i = 1; i <= n; ++i)
		{
			if((a[i] - a[i-1]) < min){
				min = a[i] - a[i-1];
			}
		}
		cout<<min<<endl;
	}
	return 0;
}