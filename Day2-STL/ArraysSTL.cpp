#include<iostream> 
#include<array> // arrays implemented in the C++ STL
#include<algorithm> // contains some common functions like sorting, searching. 
using namespace std; 

void updateArray(array<int, 6> &xaarr, int i, int val){ // we have to use ampersand becuase all STL containers are passed by value. 
	xarr[i] = val; 
}
void print(const array<int, int n> &arr){ // we should use const for read only functions. 
	for(int i = 0; i < arr.size(); i++){ // we can use .size() to get the size of array/vectors in STL
		cout << arr[i] << " ";
	}
}
int main(){
	arr<int, 6> arr = {1, 2, 3, 4, 5, 6}
	// update
	updateArray(arr, 0, 101);
	// print 
	print(arr); 
	// sorting
	sort(arr.begin(), arr.end()); // arr.begin() gives the iterator at the beginning
	// sort(arr, arr + n); // for classical arrays. 

	// Fill Method
	array<int, 10> allFives; 
	allFives.fill(5); // all 10 elements are fives. 

	// for Each loop
	for(auto x; arr){ // iterates through all of the elements in the array
		cout << x << " ";
	
	}	
}
