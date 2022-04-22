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

   srand((unsigned) time(NULL)); 

    // Using for loop

    for(int N=0; N<10; N++){

        // Offset 1 and range 50 to generate random numbers between 1 and 50

        int random = 1+ (rand() % 50);

        cout<<random<<"   ";

    }

    return 1;
   
   
     {
       randomNumber = rand();
       while(randNumb >= temp) {
            
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