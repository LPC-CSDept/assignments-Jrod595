#include <cmath>
#include <bits/stdc++.h>
using namespace std;

void findMax(int n, int arr[]) {
    int middleNum = abs(n/2);
    int half1=arr[0];
    int half2=arr[0];
    
    for (int i=0; i <= n; i++) {
        if (i <= middleNum) {
            if (arr[i] > half1) {
                half1 = arr[i];
            }