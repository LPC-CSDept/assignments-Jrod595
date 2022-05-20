#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
 
using namespace std;
 
struct employees {
    string name;
    string dept;
    int id;
    string startDate;
    int salary;
};
 
int main ()  
{
    employees emp[4]; // the array of employee structs
    employees employee; //temp employee struct for use in the while loop
    ifstream inFile("employee.txt"); //our file
    string line;
    int linenum = 0;
 
    while (getline (inFile, line))
    {