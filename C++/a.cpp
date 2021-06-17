#include <bits/stdc++.h>
using namespace std;

// contest: Codeforces Round #247 (Div. 2), problem: (A) Black Square
int main() {
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    string s;
    cin >> s;
    int sum = 0;
    for(int i = 0; s[i] != '\0'; i++){
        switch(s[i]){
            case '1' :
                sum += a1;
                break;
            case '2' :
                sum += a2;
                break;
            case '3' :
                sum += a3;
                break;
            case '4' :
                sum += a4;
                break;
        }
    }
    cout << sum;
	return 0;
}