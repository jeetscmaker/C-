#include <bits/stdc++.h>
using namespace std;
// contest: Codeforces Round #611 (Div. 3), problem: (A) Minutes Before the New Year
int main()
{
   short t;
   cin >> t;
   while(t--){
       short h, m;
       cin>>h>>m;
       cout << (((23-h)*60) + (60-m)) << endl;
   }
   return 0;
}