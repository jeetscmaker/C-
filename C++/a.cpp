#include <bits/stdc++.h>
using namespace std;

// contest: Codeforces Round #663 (Div. 2), problem: (B) Fix You

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a%b);
}

int main() {
    int t;
    cin >> t;
    int n, m;
    while (t--) {
        cin >> n >> m;
        int ans = 0;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++){
                char ch;
                cin >> ch;
                if(ch == 'C')continue;
                if(i == n and ch == 'D')
                    ans++;
                if(j == m and ch == 'R')
                    ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

