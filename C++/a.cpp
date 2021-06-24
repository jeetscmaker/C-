#include <bits/stdc++.h>
using namespace std;
// contest: Codeforces Round #652 (Div. 2), problem: (A) FashionabLee
int main () {
   int t;
   cin >> t;
   long long n;
   while(t--){
      cin >> n;
      if (n%4 == 0)
      {
         cout << "YES" << endl;
      } else
      {
         cout << "NO" << endl;
      }
   }
   return 0;
}