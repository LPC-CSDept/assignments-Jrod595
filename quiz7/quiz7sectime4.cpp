#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void deleteOne(vector<int> &);
int main()
{
    //elements that can be chosen to be erased
vector<int> v {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  
deleteOne(v);
for (int i = 0; i < v.size(); i++) {
  
cout<<v[i]<<" ";
}
return 0;
}

void deleteOne(vector<int> &v)
{
    // allow user to pick element (num) to be erased/deleted
int usernum;
cout<<"Enter element to be deleted: ";
cin>>usernum;
  
vector<int>::iterator it;
  
it = std::find(v.begin(), v.end(), usernum);
int deletecnt = 0;
while(it!= v.end())
{
v.erase(it);
  
deletecnt++;

it = std::find(v.begin(), v.end(), usernum);
}
  
  
}