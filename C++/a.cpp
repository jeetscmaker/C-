#include <bits/stdc++.h>
// contest: Codeforces Round #693 (Div. 3), problem: (A) Cards for Friends
using namespace std;
// 
int main() {    
    int t;
    cin >> t;
    while(t--) {
        int w, h;
        long n;
          cin >> w >> h >> n;
          int res = 1;
          while (w % 2 == 0) {
            w /= 2;
            res *= 2;
          }
          while (h % 2 == 0) {
            h /= 2;
            res *= 2;
          }
          cout << (res >= n ? "YES\n" : "NO\n");
    }
    return 0;
}