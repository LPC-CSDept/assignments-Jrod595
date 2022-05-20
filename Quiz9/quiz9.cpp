#include <iostream>
#include <string>
#include <fstream>

using namespace std;


// structure

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


// reads the files in array
void readFromFile(Employee employee[], int size, int& count){
   count = 0;
   char file[] = "employee.txt";
   ifstream infile(file);
   if(!infile){
       cout<<"Error: could not find the employee.txt file.";
       return ;
   }
  
   while(count<size &&
      
       infile >> employee[count].ID
       >> employee[count].fname
       >> employee[count].lname
       >> employee[count].sal
       >> employee[count].department
       >> employee[count].month
       >> employee[count].day
       >> employee[count].year
       )
       count++;
  
   infile.close();
  
}


// find and shows all employees with a salary over 100k
void greaterSalary(Employee employee[], int count){
   cout<<"Employees with salary greater than $100,000 are:\n";
   for(int i=0; i<count; i++){
       if(employee[i].sal > 100000){
           cout << employee[i].ID<<" ";
       cout << employee[i].fname<<" ";
       cout << employee[i].lname<<" ";
       cout << employee[i].sal<<" ";
       cout << employee[i].department<<" ";
       cout << employee[i].month<<" ";
       cout << employee[i].day<<" ";
       cout << employee[i].year<<" ";
       cout<<endl;
       }
   }
   cout<<endl;
}


// print the employees in the computer department
void equalsComputerDepartment(Employee employee[], int count){
   cout<<"Employees with Computer department are:\n";
   for(int i=0; i<count; i++){
       if(employee[i].department=="Computer"){
           cout << employee[i].ID<<" ";
       cout << employee[i].fname<<" ";
       cout << employee[i].lname<<" ";
       cout << employee[i].sal<<" ";
       cout << employee[i].department<<" ";
       cout << employee[i].month<<" ";
       cout << employee[i].day<<" ";
       cout << employee[i].year<<" ";
       cout<<endl;
       }
   }
   cout<<endl;
}


int main(){

   const int SIZE = 1000;
   Employee employee[SIZE];
   int count;
  
   readFromFile(employee,SIZE, count);
   if(count>0){
       cout<<count<<endl;
       greaterSalary(employee,count);
       equalsComputerDepartment(employee,count);  
   }
  

   return 0;
}