#include <bits/stdc++.h>
using namespace std;
// contest: Codeforces Round #725 (Div. 3), problem: (B) Friends and Candies
int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += a[i];
        }
        if(sum % n != 0){
            cout<<"-1"<<endl;
        } else {
            int avg = sum/n;
            int k = 0;
            for(int i=0; i<n; i++){
                if(a[i] > avg)
                    k++;
            }
            cout<<k<<endl;
        }
    }
    return 0;
}