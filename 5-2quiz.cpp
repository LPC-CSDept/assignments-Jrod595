#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() 
{   
  srand(time(0));  // Initialize random number generator.
  int minval, randnum;

  cout<<"Random numbers generated between 0 and 5:"<<endl;
  for(int i=0;i<10;i++)
  // add some code to find the min value
      randnum = (rand() % 5) + 1;
      cout << randnum; 
      // to change the minval if the current generated random number is less than minval
      if ( (i==0) || minval > )
          minval = randnum;
      
      cout << minval << " Minimum value \n";
  return 0; 
}