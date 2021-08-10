#include <bits/stdc++.h>
using namespace std;

// contest: Codeforces Round #723 (Div. 2), problem: (A) Mean Inequality

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a%b);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int64_t a[2*n];
        for(int i = 0; i<2*n ; i++) {
            cin >> a[i];
        }
        sort(a, a+(2*n));
        for(int i=0, j=2*n - 1; i<j ; i++, j--){
            cout << a[i] << ' ' << a[j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}

