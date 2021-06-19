#include <bits/stdc++.h>
using namespace std;

// contest: Codeforces Round #368 (Div. 2), problem: (A) Brain's Photos
 
int main() {    
    short n,m;
    cin >> n >> m;
    char a[n][m];
    bool is_black_white = true;
    for(short i = 0; i<n; i++){
        for(short j = 0; j<m; j++){
            cin >> a[i][j];
            if(a[i][j] != 'B' && a[i][j] != 'W' && a[i][j] != 'G'){
                is_black_white = false;
                break;
            }
        }
    }
    if(is_black_white)
        cout << "#Black&White";
    else 
        cout << "#Color";
    return 0;
}