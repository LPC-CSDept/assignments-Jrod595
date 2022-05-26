#include <bits/stdc++.h> //implementation file for precomopiled header


bool isSubset(int numbers1[], int numbers2[],
                        int m, int n)
{
        int i = 0;
        int j = 0;
        for (i = 0; i < n; i++) {
                for (j = 0; j < m; j++) {
                        if (numbers2[i] == numbers1[j])
                                break;
                }