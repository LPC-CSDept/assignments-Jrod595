#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() 
{   
  srand(time(0));  // Initialize random number generator.
 
  cout<<"Random numbers generated between 0 and 5:"<<endl;
  for(int i=0;i<10;i++)
      cout << (rand() % 5) + 1<<" ";  
  return 0; 
}