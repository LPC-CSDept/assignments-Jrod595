#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
 
using namespace std;
 
struct Employee{
   int ID;
   string fname;
   string lname;
   double sal;
   string department;
   string month;
   int day;
   int year;
};
 //reads employees information from the file

void readFromFile(Employee employees[], int size, int& count){
   count = 0;
   char file[] = "employee.txt";
   ifstream infile(file);
   if(!infile){
       cout<<"Error: could not find the employee.txt file.";
       return ;
   }
  
   while(count<size &&
      
       infile >> employees[count].ID
       >> employees[count].fname
       >> employees[count].lname
       >> employees[count].sal
       >> employees[count].department
       >> employees[count].month
       >> employees[count].day
       >> employees[count].year
       )
       count++;
  
   infile.close();

   
  
}