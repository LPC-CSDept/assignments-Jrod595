#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <cstdlib>

using namespace std;

int main () {
srand(time(0));
  int nums[50];
   int randNumb, temp;
  int randomNumber = rand();
  int getRdnum(void);
  
  cout<<"Random numbers between 1 and 10:"<<endl;

    for (int N = 10; N<10; N++)

        cout << 1+ (rand() % 50) <<"\n"; 
   
   
     {
       randomNumber = rand();
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