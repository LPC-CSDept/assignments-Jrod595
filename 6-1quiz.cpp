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