#include <bits/stdc++.h>
using namespace std;

// contest: Codeforces Round #279 (Div. 2), problem: (A) Team Olympiad

int main() {
	vector<short> vt1;
	vector<short> vt2;
	vector<short> vt3;
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		short t;
		cin >> t;
		if(t == 1)
			vt1.push_back(i);

		else if(t == 2)
			vt2.push_back(i);
		else
			vt3.push_back(i);
	}
	int m = min(min(vt1.size(), vt2.size()), vt3.size());
	cout << m << endl;
	for (int i = 0; i < m; ++i)
	{
		cout << vt1[i] << " " << vt2[i] << " " << vt3[i] << endl;
	}
}