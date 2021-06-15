#include <iostream>
using namespace std;

/**
 * Find the maximum sum of a contiguous subarray of size k in a given array
 * Input  : arr[] = {100, 200, 300, 400}, k = 2, Output : 700 {300,400}
 * Input  : arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20}, k = 4, Output : 39 {4, 2, 10, 23}
 * */

int main(){
	int n, k;
	cin>>n>>k;
	int a[n];

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int sum = 0, max_sum = 0;
	// sum of first k elements
	for (int i = 0; i < k; ++i)
	{
		sum += a[i];
	}
	int start = 0;
	for (int i = k; i < n; ++i)
	{
		if(sum > max_sum){
			max_sum = sum;
		}
		sum  = sum - a[start] + a[i];
		start++;
	}
	if(sum > max_sum){
			max_sum = sum;
	}
	cout<<"max sum is: "<<max_sum;
	return 0;
}