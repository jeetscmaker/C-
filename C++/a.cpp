#include <bits/stdc++.h>
using namespace std;

// contest: Codeforces Round #723 (Div. 2), problem: (A) Mean Inequality

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a%b);
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    int c_occur = 1, max_occur = 1;
    for(int i = 0; i<n-1; i++) {
        if(a[i] == a[i+1]) {
            c_occur++;
        } 
        else {
            max_occur = max_occur < c_occur ? c_occur : max_occur;
            c_occur = 1;
        }
    }
    // suppose all elements are equal, so else part will never be executed. Hence this expression is necessary.
    max_occur = max_occur < c_occur ? c_occur : max_occur;
    cout << max_occur;
    return 0;
}

