 // (for classical arrays)when passing the array into a new method/Function you need to pass the size of the array exlicitly because the array makes a pointer variable. 
// classical arrays are passed by reference
// all STL are passed by value(makes a new copy), so if you need to update an STL container you should use ampersand(&); 
#include<iostream> 
using namespace std; 

void print(int arr[], int n){
  for(int i = 0; i< n; i++){
    cout << arr[i] << ","; }
}

void arraySize(int arr[]){
  cout << "Array Size in Function "<< sizeof(arr); // will give 8 because it is stored in a pointer. 
  cout << endl; 
  
}
int main(){
  int arr[] = {1,2,3,4,5}; //initial list
  int n = sizeof(arr)/sizeof(int); // size of int = 4 becuase it is sotred in 4 bytes. 
  cout << "Array size in Main " << sizeof(arr)<< endl; // will give 20 because 5 elements times 4 bytes; 
  print(arr, n); 
  arraySize(arr);
  return 0; 
  
  
}
