#include <iostream>
#include<fstream>
using namespace std;
//array sizes
const int NAME_SIZE=51, socialsecurity_size=51, Score1_size=15, Score2_size=15, Score3_size=15, Score4_size=15, Score5_size=15, Grade_size=10;
//declare structure for the record struct info
struct Scores{     
      double sc[N];     
      string grade;
  int Score1;
  int Score2;
  int Score3;
  int Score4;
  int Score5;
};

struct Grade{    
      string first;    
      string last;   
      string ssn;   
      Scores score;
};
int main()
{
  Grade person;// holds info of a person selected
  char again; //to hold Yes or No
  //Open a file for binary output.
  fstream people("grades.txt", ios::out | ios::binary);
  do
    {
      //get data  about a person.
      cout<< "Enter the following data about a "
        <<"person:\n";
      cout<<"Name: ";
      cin.getline(person.name, NAME_SIZE);
      cout
    }
}