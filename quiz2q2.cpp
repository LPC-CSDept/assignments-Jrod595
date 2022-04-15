#include <iostream>
using namespace std;

int main()
{
 int number, exponent, i,ans;
  ans=1;
  i=1;
  cout<<"Enter a number  : ";
  cin>>number;
  cout<<"Enter exponent  : ";
  cin>>exponent;
  do
    {ans=ans*number;
      i++;
      }
    while(i < exponent);
      // Syntax Error
    // while(i<+exponent);
  cout<<number<<"^"<<exponent<<"="<<ans;
  return 0;
}