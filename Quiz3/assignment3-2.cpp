#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int males, females, total;
    double percentage;

    cout << "How many males are there in the class? ";
    cin >> males;
    cout << "How many females are there in the class? ";
    total = males + females;
    percentage = (double)males / total;
    cout << setprecision(2) << "Percentage of males is: ";
    cout << percentage * 100 << "%";
    return 0;
}