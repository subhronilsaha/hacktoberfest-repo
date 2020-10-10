#include <iostream>
using namespace std; 

void bubbleSort(int arr[], int length){
    int temp;
    for (int i = 0; i < length-1; i++)
        for (int j = 0; j < length-i-1; j++)
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } 
}

int main(){
    int arrayBS[] = {1,5,4,3,2};
    bubbleSort(arrayBS,sizeof(arrayBS)/sizeof(arrayBS[0]));

    return 0;
}