#include <iostream>
#include <cmath>
using namespace std;

const int N = 10;

int main()
{
  //starting array with the numbers
  int number [N] = {10, 15, 0,-25, 19, 20, 25, 30, 45, 20};
  //cycling through each number
  for(int i=0 ; i<N ; i++){
      
      if(i==0 && i+1 < N) {
      //finding any number that is difference of ten
      if(abs( number[i] - number[i+1] ) < 10){
        cout << number [i] << endl;
      }
    }else if (i==N-1 && i>0){
      //find the number that is last with difference of ten
      if( abs( number[i] - number[i-1] ) < 10) {
        cout << number[i] << endl;
              }
    }else if ( (abs( number[i] - number[i+1]) < 10) && (abs( number[i] - number[i-1] ) < 10 ) ) {
      cout << number [i] << endl;
    }
  }
  return 1;
}