#include <bits/stdc++.h>
using namespace std;

/**
	@author: jeetscmaker
	wrong answer on test 2, 1988th token was expected 'NO' but was found 'YES'.
*/

int main() {
	int t;
	cin >> t;
	unordered_map<int,int> m(5); 
	while(t--) {
		m.insert({{1,0}, {2,0}, {3,0}, {4,0}, {5,0}});
		int n;
		cin >> n;
		for(int i = 1; i<=n; i++) {
			for(int j = 1; j<=5; j++) {
				short temp;
				cin >> temp;
				if(temp == 1) {
					m[j] = (m[j]+1);
				}
			}
		}
		int count = 0;
		for(int i = 1; i <= 5; i++) {
			if(m[i] >= (n/2))
				count++;
		}
		if(count > 1)
			cout << "YES";
		else 
			cout << "NO";
		cout << endl;
		m.clear();
	}
	return 0;
}