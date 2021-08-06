#include <bits/stdc++.h>
using namespace std;
// contest: Educational Codeforces Round 109 (Rated for Div. 2), problem: (A) Potion-making
//GCD function
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a%b);
}

int main() {
    int t;
    cin >> t;
    int k;
    while (t--) {
        cin >> k;
        cout << 100 / gcd(100, k) << endl;
    }
    return 0;
}

