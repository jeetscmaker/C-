#include <bits/stdc++.h>
using namespace std;
// contest: Codeforces Round #644 (Div. 3), problem: (A) Minimal Square
int main() {
    int t;
    cin >> t;
    while(t--){
        short a, b;
    cin >> a >> b;
    short length = max(a,b);
    short breadth = min(a,b);
    if(length > 2*breadth)
        cout << ((int)length*length) << endl;
    else
        cout << ((int)4*breadth*breadth) << endl;
    }
    return 0;
}