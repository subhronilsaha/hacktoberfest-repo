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

	cout << "Size of array before Insertion : " << size << endl;

	cout << "Enter the element to be inserted : ";
	int p; cin >> p;

	cout << "Inter the index location where you want to insert : ";
	int k; cin >> k;

	//insertion algorithm
	size = size + 1;
	for (int i = size; i >= k; i--) {
		arr[i] = arr[i - 1];
	}
	arr[k] = p;

	cout << "Array after Insertion : " ;
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;

	cout << "Size of array after Insertion : " << size << endl;

	return 0;
}