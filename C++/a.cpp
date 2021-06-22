#include <iostream>
 
using namespace std;
 // contest: April Fools Day Contest 2021, problem: (B) DMCA
 // source of formula is: https://en.wikipedia.org/wiki/Digital_root
int main() {
  int x;
  cin >> x;
  cout << (x - 1) % 9 + 1;
  return 0;
}