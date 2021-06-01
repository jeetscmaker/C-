	#include <bits/stdc++.h>
	using namespace std;
// Codeforces Round #661 (Div. 3), problem: (A) Remove Smallest
int main() {
    int t; cin>>t;
    int n;
    while(t--){
      cin>>n;
      int ar[n];
      for(int i=0; i<n; i++)
        cin>>ar[i];
     sort(ar, ar+n);
     bool is_possible = true;
     for(int i=0; i<n-1; i++){
         if(ar[i+1]-ar[i] > 1){
             is_possible = false;
             break;
         }
     }
     if(is_possible) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
    }
    return  0;
}