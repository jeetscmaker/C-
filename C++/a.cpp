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
		  int abcd[4] , max = 0, max_index;
		  for(short i=0; i<4; i++){
			  cin>>abcd[i];
			  if(max<abcd[i]) {
				  max = abcd[i];
				  max_index = i;
			  }
		  }
			for(short i=0; i<4; i++){
				if(i != max_index){
					cout<< (max - abcd[i]) <<" ";
				}
			}
		  return 0;
		}
		