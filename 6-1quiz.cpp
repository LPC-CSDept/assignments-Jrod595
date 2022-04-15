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
  }
void swapTwoValues(float f1, float f2) {
  float temp;

 cout << "before FLOAT swapping." << endl;
  cout << "f1 = " << f1 << "f2 = " << f2 << endl;

  temp = f1;
  f1 = f2;
  f2 = temp;

  cout << "after FLOAT swapping." << endl;
  cout << "f1 = " << f1 << "f2 = " << f2 << endl;
}