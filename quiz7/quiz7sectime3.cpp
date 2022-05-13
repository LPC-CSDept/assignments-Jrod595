#include <iostream> 
using namespace std;

int findmax(int numbers[], int, int); // function declaration
int main()

{ // declare variables
int numbers[50], numbers1[20], numbers2[20], max1, max2, n, i, a = 0;
cout<<"Enter the the value of n: "; // input of how many numbers
cin>>n;
cout<<"Enter the numbers: "<<endl;
for(i = 0; i < n ; i++) // enter all the numbers