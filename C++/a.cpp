#include <bits/stdc++.h>
using namespace std;
const int MIN = 1e9;

int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n], b[n];
        int am = MIN, bm = MIN;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(am > a[i])
				am = a[i];
        }
         for(int i=0; i<n; i++){
            cin>>b[i];
            if(bm > b[i])
				bm = b[i];
        }
        int sum = 0;
        for(int i=0; i<n; i++){
            sum = sum + (a[i]-am) + (b[i]-bm);
        }
        cout<<sum<<endl;
        
    }
    return 0;
}