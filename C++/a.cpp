// contest: Codeforces Round #719 (Div. 3), problem: (B) Ordinary Numbers

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
      int n;
      cin >> n;
      int res = 0;
      for (ll pw = 1; pw <= n; pw = pw * 10 + 1) {
        for (int d = 1; d <= 9;  d++) {
          if (pw * d <= n) {
            res++;
          }
        }
      }
      cout << res << endl;
    }
    return 0;
}