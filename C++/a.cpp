#include <bits/stdc++.h>
using namespace std;
/*
* contest: Codeforces Round #101 (Div. 2), problem: (A) Amusing Joke
*/
int main(){
	string a,b,c;
	cin>>a>>b>>c;
	string d = a+b;
	if(d.length() != c.length()){
		cout<<"NO";
		return 0;
	}
	sort(d.begin(), d.end());
	sort(c.begin(), c.end());
	bool is_equal = true;
	for(int i = 0; i<d.length(); i++){
		if(d[i] != c[i]){
			is_equal = false;
			break;
		}
	}
	if(is_equal)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}

		
	