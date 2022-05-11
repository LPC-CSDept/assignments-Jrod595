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
            } else {
            if (arr[i] > half2) {
                half2 = arr[i];
            }
        }
    }
    
    cout << "Largest in 1st half: " << half1 << endl;
    cout << "Largest in 2nd half: " << half2 << endl;
}
 
// Driver Code
int main()
{
    int arr[] = {10, 324, 45, 90, 9808,1,5,6,7,8};