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
	  int a,b;
	  cout<<"Enter a and b"<<endl;
	  cin>>a>>b;
	  cout<<"Calculating GCD..."<<endl;
	  cout<<gcd(a, b)<<endl;
	  cout<<lcm(a,b);
	  return 0;
	}