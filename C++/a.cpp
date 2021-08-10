#include <bits/stdc++.h>
using namespace std;

// contest: Codeforces Round #723 (Div. 2), problem: (A) Mean Inequality

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a%b);
}

int main() {
    int n;
    cin >> n;
    string t;
    cin >> t;
    string required = "";
    int j = 0;
    for(int i = 0; i<n; i = i+j) {
        required += t[i];
        j++;
    }
    cout << required;
    return 0;
}

