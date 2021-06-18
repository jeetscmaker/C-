#include <bits/stdc++.h>
using namespace std;
// contest: Codeforces Round #713 (Div. 3), problem: (A) Spy Detected!

int main() {
    short t;
    cin >> t;
    while(t--){
        short n;
        cin >> n;
        short a[n];
        int sum = 0;
        for(short i = 0; i<n; i++){
            cin >> a[i];
            sum += a[i];
        }
        if((a[0] == a[1]) && (a[1] == a[2])){
           short d = (sum - (n-1)*a[0]);
           for(short i = 0; i<n; i++){
            if (a[i] == d)
            {
                cout << i+1 << "\n";
                break;
            }
           }
        }
        else{
        if(a[0] == a[1])
            cout << 3 << "\n";
        else if(a[1] == a[2])
            cout << 1 << "\n";
        else
            cout << 2 << "\n";
        } 
    }
    return 0;
}