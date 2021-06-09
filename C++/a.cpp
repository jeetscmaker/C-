#include <bits/stdc++.h>
using namespace std;
/*
* contest: Codeforces Round #642 (Div. 3), problem: (B) Two Arrays And Swaps
*/
int main(){
	int t;
	cin>>t;
	int n, k;
	
	while(t--){
		cin>>n>>k;
		int a[n], b[n];
		for(int i = 0; i<n; i++){
			cin>>a[i];
		}
		for(int i = 0; i<n; i++){
			cin>>b[i];
		}
		sort(a, a+n);
		sort(b, b+n);
		int r = 0, s = n-1;
		for(int i=0; i<k; i++){
			if(a[r]<b[s]){
				swap(a[r], b[s]);
				r++;
				s--;
			}
		}
		int sum = 0;
		for(auto element : a)
			sum += element;
		cout<<sum<<endl;
	}
	return 0;
}

		
	