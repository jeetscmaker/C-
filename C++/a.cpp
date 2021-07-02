#include <bits/stdc++.h>
using namespace std;

//  Codeforces Beta Round #32 (Div. 2) B. Borze code.

int main() {
  string s;
  cin >> s;
  string s1 = "";
  for (int i = 0; s[i] != '\0'; )
  {
    if (s[i] == '-')
    {
      if (i+1<s.length())
      {
        if (s[i+1] == '.')
        {
          s1 += "1";
          i = i+2;
        }
        else if(s[i+1] == '-')
        {
          s1 += "2";
          i = i+2;
        }
      }
    }
    else {
      s1 += "0";
      i++;
    }
  }
  cout << s1;
  return 0;
}