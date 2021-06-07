	#include <bits/stdc++.h>

	using namespace std;

	const int mod = 1e9 + 7;

	int mul_modulo(int a, int b, int m) {
	  return ((a % m) * (b % m)) % m;
	}
	
	int add_modulo(int a, int b, int m) {
	  return ((a % m) + (b % m)) % m;
	}
	
	// GCD using iterative approach
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
	
	// GCD using recursive approach
	int gcd_r(int a, int b){
		return b == 0 ? a : gcd_r(b, a%b);
	}
	
	int lcm(int a, int b) {
        return (a * b) / gcd(a, b);
    }
	
	bool is_not_divisible(int k, int l, int m, int n, int d){
		if((d%k != 0) && (d%l != 0) && (d%m != 0) && (d%n != 0))
			return true;
		else
			return false;
	}
/**
 * contest: Codeforces Round #105 (Div. 2), problem: (A) Insomnia cure
 */
	int main() {
		 int k,l,m,n,d;
		 cin>>k>>l>>m>>n>>d;
		 int count = 0;
		 for(int i=1; i<=d; i++){
			 if(is_not_divisible(k,l,m,n,i))
				 count++;
		 }
		 cout<<d-count;
		return 0;
	}
		