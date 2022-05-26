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

