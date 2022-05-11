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
//otherwise checks for the previous and next element
if(index!=N && index!=0 && (abs(a[index]-a[index+1])<10) && (abs(a[index]-a[index-1])<10))
return true;
//return false if condition is not satisfied
return false;
}
int main(){
int number[N] = {10,15,0,-25,19,20,25,30,45,20};
//lopp from 0 to less than N
for(int i=0;i<N;i++){
    //checks and display element from numbers
if(check(number,i))
cout<<number[i]<<" at index "<<i<<" is following the criteria."<<endl;
}
}