#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main() {
	int arr[] = {1, 3, 5, 7, 9};
	int size = sizeof(arr) / sizeof(int);
	cout << "Array before Insertion : " ;
	for (int i : arr)
		cout << i << " ";
	cout << endl;

	cout << "Size of array before Deletion : " << size << endl;

	cout << "Inter the index location where element to be deleted : ";
	int k; cin >> k;

	//Deletion Algorithm
	int d = arr[k]; //store deleted element
	for (int i = k; i <= size; i++)
		arr[i] = arr[i + 1];
	size  = size - 1;

	cout << "Array after Deletion : " ;
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;

	cout << "Size of array after Deletion : " << size << endl;

	return 0;
}