#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void deleteOne(vector<int> &);
int main()
{
vector<int> v {10, 20, 30, 20, 40, 20};
  
deleteOne(v);
for (int i = 0; i < v.size(); i++) {
  
cout<<v[i]<<" ";
}
return 0;
}

void deleteOne(vector<int> &v)
{
