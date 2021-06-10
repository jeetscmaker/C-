// counting sort  implementation
#include <iostream>
using namespace std;

int main() {
	int a[] = {1, 3, 6, 9, 9, 3, 5, 9};
	int book_keeping_array[9] = {0};
	for(int i = 0; i<9; i++){
		book_keeping_array[a[i]-1]++;
	}
	for(int i = 0; i<9; i++){
		cout<<book_keeping_array[i]<<" ";
	}
	return 0;
}