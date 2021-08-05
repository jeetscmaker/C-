#include <bits/stdc++.h>
using namespace std;

// Codeforces Round #620 (Div. 2) A. Two Rabbits

int main() {
    int t;
    cin >> t;
    long long x,y,a,b,diff,divisor;
    while (t--) {
        
        cin >> x >> y >> a >> b;
        diff = y - x;
        divisor = a+b;
        if(diff%divisor == 0)
            cout << (diff/divisor) << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}

