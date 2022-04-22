#include <iostream>
#include <fstream>
#include <string>
using namespace std;
bool isNumber(const string& str)
{
    for (char const &c : str) {
        if (std::isdigit(c) == 0) return false;
    }
    return true;
}
int main () {
  string line;
  ifstream myfile ("students.txt");
  if (myfile.is_open())
  {
    string studentname;
    int total80;
    
    while ( getline (myfile,line) )
    {
     if (!isNumber(line)){
       studentname=line;
       cout << studentname;
      continue;
     }
      int sumTotal;
        int average;


      cout << "Sum total: " << sumTotal << " Average: " << average << "\n";

 

        if (average >= 80) {
            total80 = total80+1;

        } 
    }
    myfile.close();
    std::cout << "Total students with 80+: " << total80 << std::endl;
  }

  else cout << "Unable to open file"; 

  return 0;
}