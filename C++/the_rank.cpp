#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	cin >> n;
	int a,b,c,d,score[n],id[n];
	for(int i = 1; i <= n; i++) {
		cin >> a >> b >> c >> d;
		score[i-1] = (a+b+c+d);
		id[i-1] = i;
	}
	for(int i = 0; i < n; i++) {
		for(int j = i+1; j<n; j++) {
			if(score[i]<score[j]) {
				swap(score[i], score[j]);
				swap(id[i], id[j]);
			}
			else if(score[i] == score[j]) {
				if(id[i] > id[j]) {
					swap(id[i], id[j]);
				}
			}
			else {
				// do nothing
			}
		}
	}
	int rank = 0;
	for(int i = 0; i < n; i++) {
		if(id[i] == 1) {
			rank = i+1;
			break;
		}
	}
	cout << rank;
	return 0;
}
