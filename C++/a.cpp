#include <bits/stdc++.h>

using namespace std;
// contest: Educational Codeforces Round 102 (Rated for Div. 2), problem: (A) Replacing Elements
int main(){
    int t;
    cin>>t;
    
    while(t--){
      short n, d;
      bool possible = false;
      cin >> n >> d;
      short num[n];
      for (int i = 0; i < n; ++i)
      {
        cin >> num[i];
      }
      sort(num, num+n);
      if(num[n-1] <= d) possible = true;
      else if(num[0]+num[1] <= d) possible = true;
      if(possible) 
        cout << "YES" << "\n";
      else
        cout << "NO" << "\n";
    }
    return 0;
}