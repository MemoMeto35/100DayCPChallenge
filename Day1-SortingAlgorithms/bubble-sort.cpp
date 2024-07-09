#include<iostream>
#include<array>
using namespace std;
void  bubbleSort(int arr[], int n){
	// n is the size of the array
  int i, j;
	bool swapped;
	for(i = 0; i<n-1; i++){
		swapped = false;
		for(int j =0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]){
			swap(arr[j], arr[j+1]);
			swapped = true; }}
		// If no elements in the inner loop get swapped, then break because it will be already sorted;
		if(!swapped) break; }
}

int main(){
    
	int arr[] = {2,3,5,4,1};
	int n = sizeof(arr)/sizeof(int);
	bubbleSort(arr, n);

	for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
	}
	}
