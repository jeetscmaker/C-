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
/**
 * contest: Codeforces Round #392 (Div. 2), problem: (A) Holiday Of Equality
 */
	int main() {
		  int n; 
		  cin>>n;
		  int a[n];
		  int max = 0;
		  for(int i = 0; i<n ; i++){
			  cin>>a[i];
			  if(a[i] > max)
                max = a[i];
		  }
		  int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += (max - a[i]);
        }
		cout<<sum;
		  return 0;
		}
		