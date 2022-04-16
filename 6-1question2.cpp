#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <tuple>
#include <algorithm>
using namespace std;

std::tuple<int, int, int> generateNumbs() {
  int n1,n2,n3;
  srand(time(0));

    n1 = rand() % 100;
    // std::cout << n1 << endl;

    n2 = rand() % 100;
    // cout << n2 << endl;

    n3 = rand() % 100;
    // cout << n3 << endl;
  return  {n1,n2,n3};
}



int main()  {
  // func to create rand numbers that returns an array
  // arr = generateNumbs();
  auto [n1, n2, n3] = generateNumbs();
  
  
  // func to sort array
  // min = findMin(n1,n2,n3);
  
  // func to cout eveyrthing 
  printMin(n1,n2,n3);

  
  
  
  // min = findMin(n1,n2,n3);
  
  return 0;
}
  