#include <stdio.h>
//function starts here
int findMax(int number[],int from,int to)
{
int i,largest=number[from];
for(i=from;i<=to;i++)
{
 if(largest<number[i])
largest=number[i];