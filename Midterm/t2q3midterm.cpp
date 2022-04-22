#include <iostream>
#include <fstream>
using namespace std;

int main () {

  int nums[10];
   int randNumb, temp;
   
   for (int i = 0; i < 10; i++) {
       randNumb = getRandomNumber();
       while(randNumb >= temp) {
            nums[i] = randNumb;
           temp = randNumb;
       }
    }

  ofstream myfile ("numbers.txt");
  if (myfile.is_open())
  {
    for (int i = 0; i < 10; i++)  {
        // Write to file
      myfile << nums[i] << "\n";
    }
    
    myfile.close();
    }
  

  else cout << "Unable to open file";
  return 0;
}