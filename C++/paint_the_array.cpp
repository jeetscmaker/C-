#include <bits/stdc++.h>
using namespace std;

/** Paint the array in such a way, that the adjacent elements are not of the same colour
	condition 1: Only two colors red and blue are allowed,
	condition 2: All the numbers divisible by an integer d should be painted blue 
				and others should be painted red.
	print that number d as output or print 0 if no such d is available.
*/
int main(){
  int t;
  cin >> t;
  while(t--){
	int n;
	cin >> n;
	int64_t a[n];
	for(int i = 0; i < n; i++) 
		cin >> a[i];
	int64_t gcd1 = 0, gcd2 = 0;
	for(int i = 0; i < n; i++) {
		if(i%2 == 0)
			gcd1 = gcd(gcd1, a[i]);
		else
			gcd2 = gcd(gcd2, a[i]);
	}
	for(int i = 1; i < n; i = i+2) {
			if(a[i]%gcd1 == 0) {
				gcd1 = 0;
				break;
			}
	}
	for(int i = 0; i < n; i = i+2) {
			if(a[i]%gcd2 == 0) {
				gcd2 = 0;
				break;
			}
	}
	if(gcd1 == gcd2)
	    cout << 0;
	else {
		cout << (gcd2 > gcd1 ? gcd2 : gcd1);
	}
	cout << "\n";
  }
  return 0;
}