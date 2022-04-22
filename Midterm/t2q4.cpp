#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <cstdlib>

using namespace std;

int main () {

  int nums[10];
   int randNumb, temp;
  int randomNumber = rand();
  int getRdnum(void);
   
   for (int N = 10; N<10; N++)
     {
       randomNumber = randNumb();
       while(randNumb >= temp) {
            nums[N] = randNumb;
           temp = randNumb;
       }
    }

  ofstream myfile ("numbers.txt");
  if (myfile.is_open())
  {
    for (int N = 10; N<10; N++)  {
        // Write to file
      myfile << nums[N] << "\n";
    }
    
    myfile.close();
    }
  

  else cout << "Unable to open file";
  return 0;
}