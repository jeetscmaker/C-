	#include <bits/stdc++.h>
	using namespace std;
// contest: Codeforces Round #667 (Div. 3), problem: (A) Yet Another Two Integers Problem
int main() {
    int t; cin>>t;
    int a, b;
    while(t--){
     cin>>a>>b;
	 int diff = a<b? b-a : a-b;
	 if(diff == 0){
		cout<<0<<endl;
		continue;		
	 }
	 int counter = ceil(diff*1.0/10);
	 cout<<counter<<endl;
    }
    return  0;
}