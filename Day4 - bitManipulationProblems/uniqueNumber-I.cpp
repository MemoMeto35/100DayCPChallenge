// find the unique number in an array of integers that each integer is repeated exactly once except for one number; 
// note that the XOR of two numbers is zero; eg, 4 ^ 4 = 0; 


#include<iostream> 
#include<array> 
using namespace std; 

int main(){
  int arr[7] = {3, 4, 1, 7, 3, 1, 7}; 
  int ans=0;
  for(auto x : arr){
    ans ^= x; // performs XOR operation 
  }
  cout << ans; // 4
}
