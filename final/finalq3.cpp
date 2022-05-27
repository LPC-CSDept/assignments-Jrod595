#include <bits/stdc++.h> //implementation file for precomopiled header

//sets up method for retuns true if the elements in a pair are presented as a argument otherwise it returns false
bool isSubset(int numbers1[], int numbers2[],  int m, int n)
{
        int i = 0; // set variables
        int j = 0;
        for (i = 0; i < n; i++) {
                for (j = 0; j < m; j++) {
                        if (numbers2[i] == numbers1[j])
                                break;
                }
                 if (j == m)
                        return 0;
        }

        
        return 1;
}
int main() //function to get returns at the end of executing 
{
        int numbers1[] = { 2,3,5,9,10 };
        int numbers2[] = { 1,2,3,5,9,10,11,13,15,17 };

        int m = sizeof(numbers1) / sizeof(numbers1[0]);
        int n = sizeof(numbers2) / sizeof(numbers2[0]);
if (isSubset(numbers1, numbers2, m, n))//checking for subsets between numbers1 and numbers2
                printf("numbers1[] is subset of numbers1[] ");
        else
                printf("numbers2[] is not a subset of numbers1[]");

        getchar();
        return 0;
}
