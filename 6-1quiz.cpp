#include <iostream>
using namespace std;
 
void swapTwoValues(int n1, int n2) {
  cout << "before INT swapping." << endl; 
  cout << "n1 = " << n1 << "n2 = " << n2 << endl;
  
  int temp;
  temp = n1;
  n1=n2;
  n2=temp;
  
  cout << "after INT swapping." << endl;
  cout << "n1 = " << n1 << "n2 = " << n2 << endl;
}
void swapTwoValues(double  f1, double f2) {
  cout << "before FLOAT swapping.";
  double f3;
  f3 = f1;
  f1=f2;
  f2=f3;
  
  cout << " after FLOAT swapping. " << f1 << endl;
}

int main() {
  swapTwoValues(6, 9);
  swapTwoValues(6.9, 4.2);

  return 0;
}