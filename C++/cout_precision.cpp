#include <bits/stdc++.h>
using namespace std;

/**
	@author: jeetscmaker
*/

int main() {
	int n, m;
	cin >> n >> m;
	float a, b, minimum = 100000.0f;
	for(int i = 0; i < n; i++) {
		cin >> a >> b;
		float price = a/b;
		minimum = min(price, minimum);
	}
	cout.precision(8);
	cout << std::fixed;
	cout << m*minimum;
	return 0;
}