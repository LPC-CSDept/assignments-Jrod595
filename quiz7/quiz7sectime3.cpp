#include <stdio.h>
//function starts here
int findMax(int number[],int from,int to){
    int i,largest=number[from];
    for(i=from;i<=to;i++){
        if(largest<number[i])
            largest=number[i];
    }
    return largest;
}
//main program begins
int main()
{
    const int N=10;
    int first_largest,second_largest;
    int number[]={10,15,0,-25,19,20,25,30,45,20};
    //both functions call by passing array
    first_largest = findMax(number,0,N/2-1);
    second_largest = findMax(number,N/2,N-1);
    printf("Largest number from the first half : %d ",first_largest);
    printf("\nLargest number from the first half : %d ",second_largest);
    return 0;
}