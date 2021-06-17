#include <bits/stdc++.h>
using namespace std;
// contest: Codeforces Round #289 (Div. 2, ACM ICPC Rules), problem: (A) Maximum in Table
bool is_even(long n) {
    return (n%2 == 0);
}
int main() {
    short n;
    cin >> n;
    int a[n][n];
    for(short i = 0; i<n; i++){
        a[0][i] = 1;
        a[i][0] = 1;
    }
    for(short i = 1; i<n; i++){
        for(short j = 1; j<n; j++){
            a[i][j] = a[i-1][j] + a[i][j-1];
        }
    }
    cout << a[n-1][n-1];
	return 0;
}