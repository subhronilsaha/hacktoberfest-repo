/*
LARGEST SUM CONTIGUOUS SUBARRAY (KADANE 1D):
===============================
Write an efficient program to find the sum of contiguous subarray within a one-
dimensional array of numbers which has the largest sum.


*/

#include<iostream> 
#include<climits> 
using namespace std; 
  
// Maximum Subarray problem. (Kadane 1D)
int maxSubarraySum(int a[], int size) { 
    int maxSoFar = INT_MIN;
    int maxEndingHere = 0; 
  
    for (int i = 0; i < size; i++) { 
        maxEndingHere = maxEndingHere + a[i]; 

        if (maxSoFar < maxEndingHere) {
            maxSoFar = maxEndingHere; 
        }

        if (maxEndingHere < 0) {
            maxEndingHere = 0;
        } 
    } 
    return maxSoFar; 
} 

// Main function 
int main() { 
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3}; 
    int n = 8; 
    int max_sum = maxSubarraySum(a, n); 
    cout << "Maximum contiguous sum using Kadane's algorithm is " << max_sum << endl; 
    return 0; 
} 