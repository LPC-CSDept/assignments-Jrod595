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

// show all employees with salary over 100k
void greaterSalary(Employee emps[], int count){
   cout<<"Employees with salary greater than $100,000 are:\n";
   for(int i=0; i<count; i++){
       if(emps[i].sal > 100000){
           cout << emps[i].ID<<" ";
       cout << emps[i].fname<<" ";
       cout << emps[i].lname<<" ";
       cout << emps[i].sal<<" ";
       cout << emps[i].department<<" ";
       cout << emps[i].month<<" ";
       cout << emps[i].day<<" ";
       cout << emps[i].year<<" ";
       cout<<endl;
       }
   }
   cout<<endl;
}

  
}