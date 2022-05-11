#include<cmath>
#include<iostream>
using namespace std;
const int N = 10;
bool check(int a[],int index){
//checks if the index is 0 then compare only with next element
if(index==0 && (abs(a[index]-a[index+1])<10))
return true;
//checks to see if index is N-1 then checks only with previous element
if(index==N-1 && (abs(a[index]-a[index-1])<10))
return true;