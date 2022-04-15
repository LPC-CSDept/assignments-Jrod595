#include <iostream>
#include <fstream>
using namespace std;

int main() {

  return 0;
}

void swapTwoValues(int n1, int n2) {
  int temp;

 cout << "before INT swapping." << endl; 
  cout << "n1 = " << n1 << "n2 = " << n2 << endl;

  temp = n1;
  n1 = n2;
  n2 = temp;

  cout << "after INT swapping." << endl;
  cout << "n1 = " << n1 << "n2 = " << n2 << endl;