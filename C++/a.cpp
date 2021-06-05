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

// contest: Codeforces Round #244 (Div. 2), problem: (A) Police Recruits
	int main() {
		  int n, count = 0;
		  cin>>n;
		  short k;
		  int capacity = 0, cnt_untreated_cases = 0; 
		  while(n--){
			  cin>>k;
			  if(k == -1){
				  if(capacity > 0){
					  capacity--;
				  } else {
					  cnt_untreated_cases++;
				  }
			  } else {
				  capacity += k;
			  }
		  }
		  cout<<cnt_untreated_cases;
		  return 0;
		}
		