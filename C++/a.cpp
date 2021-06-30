#include <bits/stdc++.h>

using namespace std;
// contest: Codeforces Beta Round #9 (Div. 2 Only), problem: (A) Die Roll
int main(){
    short Y, W;
    cin >> Y >> W;
    int ma = max(Y, W);
    int winningPoint = 7-ma;
    if (6%winningPoint == 0)
    {
      cout << 1 <<"/"<<(6/winningPoint);
    }
    else if(winningPoint == 4)
      cout << 2 <<"/"<<3;
    else
      cout << winningPoint <<"/"<<6;
    return 0;
}