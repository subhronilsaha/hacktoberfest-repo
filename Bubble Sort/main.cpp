#include <iostream>
using namespace std; 
//Including the header file

//Intilizing the function as void
void bubbleSort(int arr[], int length){
    int temp;
//Looping through the array of integer as variable i
    for (int i = 0; i < length-1; i++)


//Looping through the array of integer as variable j
        for (int j = 0; j < length-i-1; j++)
//Comparing the values
            if (arr[j] > arr[j+1]) 

//Swapping the values
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } 
}
//Intilizing the main function
int main(){
    int arrayBS[] = {1,5,4,3,2};
    bubbleSort(arrayBS,sizeof(arrayBS)/sizeof(arrayBS[0]));

    return 0;
}
