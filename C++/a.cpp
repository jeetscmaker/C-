#include <bits/stdc++.h>
using namespace std;
// contest: Codeforces Round #624 (Div. 3), problem: (A) Add Odd or Subtract Even
// choose any positive odd integer x and replace a with a+x.
// choose any positive even integer y and replace a with a-y.
// Obtain b from a in minimum number of such operations.
bool is_even(long n) {
    return (n%2 == 0);
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        long a, b;
        cin >> a >> b;
        if(a > b){
            if(is_even(a - b))
                cout << 1 << endl;
            else 
                cout << 2 << endl;
        } else if(b > a) {
            if(is_even(b - a))
                cout << 2 << endl;
            else 
                cout << 1 << endl;
        } else
            cout << 0 << endl;
        
    }
	return 0;
}