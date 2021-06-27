#include <bits/stdc++.h>
using namespace std;
// contest: Codeforces Round #722 (Div. 2), problem: (A) Eshag Loves Big Arrays
int main()
{
  int t;
  cin >> t;
  for (int tt = 0; tt < t; ++tt)
  {
     int n;
     cin >> n;
     int a[n];
     int min = 1e5;
     for (int i = 0; i < n; ++i)
     {
        cin >> a[i];
        if (a[i] < min)
        {
           min = a[i];
        }
     }
     int count = 0;
     for (int i = 0; i < n; ++i)
     {
        if (a[i] == min)
        {
           count++;
        }
     }
     cout << n-count << endl;
  }
   return 0;
}