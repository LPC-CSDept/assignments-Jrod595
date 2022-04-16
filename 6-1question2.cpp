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
    std::cout << n1 << endl;

    n2 = rand() % 100;
    std::cout << n2 << endl;

    n3 = rand() % 100;
    std::cout << n3 << endl;
  
  return  {n1,n2,n3};
}

int min(int n1, int n2, int n3) {
  int arr[3];
  int n = sizeof(arr);
  
  arr[0] = n1;
  arr[1] = n2;
  arr[2] = n3;
  sort(arr, arr + n);

  return arr[0];
} 

int printMin(int n1, int n2, int n3) {
  cout << "min(n1,n2,n3)==" << min(n1,n2,n3) << '\n';
  return 0;
}

int main()  {
  // func to create rand numbers that returns an array
  // arr = generateNumbs();
  auto [n1, n2, n3] = generateNumbs();
  printMin(n1,n2,n3);
  
  return 0;
}
