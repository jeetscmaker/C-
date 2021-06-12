#include <bits/stdc++.h>
using namespace std;
/**
 * contest: Codeforces Round #365 (Div. 2), problem: (A) Mishka and Game
 * */
int main() {
	int n;
	cin>>n;
	int m[n], c[n];
	int mishka_wins = 0, chris_wins = 0;
	for (int i = 0; i < n; ++i)
	{
		cin>>m[i]>>c[i];
		if (m[i] > c[i])
		{
			mishka_wins++;
		}
		else if (c[i] > m[i])
		{
			chris_wins++;
		}
		else{
			// do nothing, it's a draw.
		}
	}
	if (mishka_wins > chris_wins)
			cout<<"Mishka";
		else if(chris_wins > mishka_wins)
			cout<<"Chris";
		else
			cout<<"Friendship is magic!^^";
	return 0;
}