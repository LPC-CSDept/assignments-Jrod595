#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() 
{
  int n1, n2, n3;
   srand(time(0));

    n1 = rand() % 100;
    cout << n1 << endl;

    n2 = rand() % 100;
    cout << n2 << endl;

    n3 = rand() % 100;
    cout << n3 << endl;
  