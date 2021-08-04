#include <bits/stdc++.h>
using namespace std;

// contest: Codeforces Round #700 (Div. 2), problem: (A) Yet Another String Game

int main() {
    int t;
    cin >> t;
    string s;
    while (t--) {
        cin >> s;
        int n = s.length();
        for (int i = 0; i < n; ++i)
        {
            if (i%2 == 0) // Alice's turn to move.
            {
                if (s[i] != 'a') s[i] = 'a';
                else s[i] = 'b';
            }
            else { // Bob's turn to move.
                if (s[i] != 'z') s[i] = 'z';
                else s[i] = 'y';   
            }
        }
        cout << s << endl;
    }
    return 0;
}

