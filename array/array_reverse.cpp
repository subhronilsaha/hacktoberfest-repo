#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int start, int end) 
{ 
    while (start < end) 
    { 
        int temp = arr[start];  
        arr[start] = arr[end]; 
        arr[end] = temp; 
        start++; 
        end--; 
    }  
}      
  
int main(){
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    reverseArray(arr,0,N-1);
    for(int i:arr){
        cout << i << " ";
    }
    return 0;
}