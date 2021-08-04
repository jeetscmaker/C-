#include <bits/stdc++.h>
using namespace std;

// Educational Codeforces Round 82(Div. 2), problem: (A)Erasing Zeroes

int main() {
    int t;
    cin >> t;
    string s;
    while (t--) {
        cin >> s;
        int n = s.length();
        int count = 0;
        int current_index_of_1 = -1;
        for (int i = 0; i < n; ++i)
        {
            if(s[i] == '1') {
                current_index_of_1 = i; // first index of 1 found.
                break;
            }
        }
        if(current_index_of_1 == -1) { // suppose there is no 1 in the given string.
            cout << 0 << endl;
            continue;
        }
        
        for(int i = current_index_of_1+1; i<n; i++) {
            if(s[i] == '1') {
                // because for two consecutive 1, we should not increase the count.
                // And the same applies for further indices of 1.
                count += (i - current_index_of_1  - 1); 
                // update the current_index_of_1 with the latest index of 1.
                current_index_of_1 = i;
            }
        }
        
        cout << count << endl;
    }
    return 0;
}

