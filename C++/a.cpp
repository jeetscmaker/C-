#include <bits/stdc++.h>
using namespace std;
 
 /* contest: Codeforces Round #246 (Div. 2), problem: (A) Choosing Teams */

 const short MAX_PARTICIPATION = 5;

int main() {
	int n, k;
	cin >> n >> k;
	int a[n];
	short counter = 0, no_of_teams = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		if ((a[i] + k) > MAX_PARTICIPATION)
			continue;
		else
		{
			counter++;
			if (counter == 3)
			{
				no_of_teams++;
				counter = 0;
			}
		}
	}
	cout << no_of_teams;
	return 0;
}