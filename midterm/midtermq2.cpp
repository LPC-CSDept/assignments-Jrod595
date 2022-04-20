#include <iostream>
 #include <fstream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
char filename [50];
ifstream students;
cin.getline (filename, 50);
students.open(filename);

if(!students.is_open()){
    exit (EXIT_FAILURE);
}
char word[50];
students >> word;
while (students.good()){
    cout << word << " ";
    students >> word;
}
system ("pause");
return 0;
}