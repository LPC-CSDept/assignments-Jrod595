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
      continue;
     }
       
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 

  return 0;
}