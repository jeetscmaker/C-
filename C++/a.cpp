#include <bits/stdc++.h>
using namespace std;

// contest: Codeforces Round #656 (Div. 3), problem: (B) Restore the Permutation by Merger
int main() {
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	std::vector<int> v;
    	for (int i = 0; i < 2*n; ++i)
    	{
    		int element;
    		cin >> element;
    		v.push_back(element);
    	}
    	vector<int> res;
    	for (int k = 0; k < n; k++)
    	{
    		int item = v[0];
    		res.push_back(item);
    		v.erase(std::remove(v.begin(), v.end(), item), v.end());
    	}
    	for (std::vector<int>::iterator i = res.begin(); i != res.end(); ++i)
    	{
    		cout << *i << " ";
    	}
    	cout << "\n";
    }
	return 0;
}