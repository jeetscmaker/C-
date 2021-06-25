#include <bits/stdc++.h>
using namespace std;
// codeforces contest: Hello 2019, problem: (A) Gennady and a Card Game
int main()
{
   string s[6];
   for (int i = 0; i < 6; ++i)
   {
      cin >> s[i];
   }
   bool can_play = false;
   for (int i = 1; i <= 5; ++i)
   {
      if (s[0][0] == s[i][0] || s[0][1] == s[i][1])
      {
         can_play = true;
         break;
      }
   }
   if (can_play)
   {
      cout << "YES";
   }
   else
      cout << "NO";
   return 0;
}