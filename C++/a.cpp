#include <bits/stdc++.h>
using namespace std;
/**
 * contest: Codeforces Round #650 (Div. 3), problem: (B) Even Array
 */ 
int main() {
    int t;
    cin >> t;
     for (int i = 0; i < t; i++) {
            short n; cin>>n;
            if (n < 2) {
                cout<<-1<<endl;
                continue;
            }
            int a[n];
            short count_even = 0;
            short count_odd = 0;
            for (int j = 0; j < n; j++) {
                cin>>a[j];
            }
            for (int j = 0; j < n; j++) {
                if (j % 2 == 0 && a[j] % 2 != 0)
                    count_even++;
                if (j % 2 == 1 && a[j] % 2 != 1)
                    count_odd++;
            }
            if (count_even == count_odd)
                cout<<count_even<<endl;
            else
                cout<<-1<<endl;
        }
    return 0;
}