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
		int big = a > b ? a : b;
        int small = a < b ? a : b;
        int remainder = big % small;
        while (remainder != 0) {
            big = small;
            small = remainder;
            remainder = big % small;
        }
        return small;
	}
	
	int lcm(int a, int b) {
        return (a * b) / gcd(a, b);
    }
	
	int main() {
	  int k, r;
	  cin>>k>>r;
	  for(int i = 1; i<=10; i++) {
		  if((k*i) % 10 == r || (k*i) % 10 == 0){
		  cout<<i;
		  break;
	    }
	  }
	  return 0;
	}