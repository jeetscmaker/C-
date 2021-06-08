	#include <bits/stdc++.h>

	using namespace std;
/**
 * contest: Codeforces Round #164 (Div. 2), problem: (A) Games
 */
	int main() {
		 int n;
		 cin>>n;
		 int h[n], g[n];
		 for(int i=0; i<n; i++){
			 cin>>h[i]>>g[i];
		 }
		 int count = 0;
		 for(int i=0; i<n; i++){
			 for(int j=0; j<n; j++){
				 if(i == j){
					 continue;
				 }
				 else {
					 if(h[i] == g[j])
						 count++;
				 }
			 }
		 }
		 cout<<count;
		return 0;
	}
		
	