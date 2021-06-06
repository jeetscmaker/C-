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
 * contest: Codeforces Round #653 (Div. 3), problem: (A) Required Remainder
 */
	int main() {
		  int t; cin>>t;
		  int x, y, n;
		  while(t--){
			  cin >> x >> y >> n;
			  if(n%x < y)
			  {
				  int k = n-x + (y - (n%x));
				  cout<< k << endl;
			  }
			  else if(n%x > y)
			  {
				  int k =  n - ((n%x)-y); 
				  cout<< k << endl;
			  }
			  else
				  cout<< n << endl;
			  
		  }
		  return 0;
		}
		