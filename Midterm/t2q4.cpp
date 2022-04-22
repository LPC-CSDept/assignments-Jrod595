#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <cstdlib>

using namespace std;

int main(){

    srand((unsigned) time(NULL)); 

    // Using for loop

    for(int N1=0; N1<1; N1++){

        // Offset 1 and range 100 to generate random numbers between 1 and 100

        int random = 1+ (rand() % 100);

        cout<<random<<"   ";

    }

    return 1;

}