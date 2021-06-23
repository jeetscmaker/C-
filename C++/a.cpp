#include <bits/stdc++.h>
using namespace std;

// contest: Codeforces Round #223 (Div. 2), problem: (A) Sereja and Dima.
//          Sereja starts first.

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++) {
        cin >> a[i];
    }
    int s_count = 0, d_count = 0;
    int i = 0, j = n-1;
    while (i < j) {
            // 4 1 2 10
            if (a[i] > a[j]) {
                s_count += a[i];
                i++;
            } else {
                s_count += a[j];
                j--;
            }
            // Dima's points calculation.
            if (a[i] > a[j]) {
                d_count += a[i];
                i++;
            } else {
                d_count += a[j];
                j--;
            }
        }
        if (n % 2 != 0) // n is odd number
        {
            // then i must be equal to j after the loop terminates. And every odd time it's Sereja's turn
            // to collect a point. Therefore s_count should be updated with the latest value of i or j.
            s_count += a[i];
        }
    cout << s_count << " " << d_count;
    return 0;
}