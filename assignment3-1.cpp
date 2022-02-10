#include <iostream>
using namespace std;

int main ()
{
   int classA;
   int classB;
   int classC;

   int priceA = 15;
   int priceB = 12;
   int priceC = 9;

   cout<< "Enter the number of Tickets sold for Class A: ";
   cin >> classA; 
   cout<< "Enter the number of Tickets sold for Class B: ";
   cin >> classB;
   cout<< "Enter the number of Tickets sold for Class C: ";
   cin >> classC;
   total = (classA * priceA) + (classB * priceB) + (classC * priceC)
   ;
   cout << "Total price for tiket sold " << total << endl;
}