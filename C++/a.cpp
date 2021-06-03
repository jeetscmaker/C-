	#include <bits/stdc++.h>

	using namespace std;

	const int mod = 1e9 + 7;

	int mul_modulo(int a, int b, int m) {
	  return ((a % m) * (b % m)) % m;
	}
	
	int add_modulo(int a, int b, int m) {
	  return ((a % m) + (b % m)) % m;
	}
	
	int gcd(int a, int b) {
		int big = a>b ? a : b;
		int small = a<b ? a : b;
		int remainder = 1;
		while(remainder != 0){
			remainder = big%small;
			big = small;
			small = remainder;
		}
		return small;
	}
	
	int main() {
	  int n;
	  cin >> n;
	  // (a*b)%m = ((a%m)*(b%m))%m
	  int result = 1;
	  for (int i = 1; i <= n; ++i) {
	    result = mul_modulo(result, 2, mod);
	  }
	  cout << mod << endl;
	  cout << result;
	  return 0;
	}