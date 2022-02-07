#include <bits/stdc++.h>
using namespace std;

/* contest: Codeforces Round #760 (Div. 3), problem: (D) Array and Operations */

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += a[i + k] / a[i];
    }
    sum += accumulate(a.begin() + 2 * k, a.end(), 0);
    cout << sum << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}