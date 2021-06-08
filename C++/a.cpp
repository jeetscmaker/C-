	#include <bits/stdc++.h>

	using namespace std;
/**
 * contest: Codeforces Round #322 (Div. 2), problem: (A) Vasya the Hipster
 */
	int main() {
		 int n;
		 cin>>n;
		 int a[n];
		 int count = 0;
		 for(int i = 0; i < n; i++){
			 cin>>a[i];
		 }
		 int min = a[0], max = a[0];
		 for(int i = 1; i < n; i++){
			 if(a[i] < min){
				 count++;
				 min = a[i];
			 }
			else if(a[i] > max){
				 count++;
				 max = a[i];
			 }
			 else {}
		 }
		 cout<<count;
		 return 0;	
	}
		
	