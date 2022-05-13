#include <stdio.h>
//function beings right here
int findMax(int number[],int from,int to)
{
int i,largest=number[from];
for(i=from;i<=to;i++)
{
 if(largest<number[i])
largest=number[i];
    }
    return largest;
}
//main driver program starts here
int main()
{
    const int N=10;
    int first_largest,second_largest;
    int number[]={10,15,0,-25,19,20,25,30,45,20};
    //two function calls by passing array
    first_largest = findMax(number,0,N/2-1);