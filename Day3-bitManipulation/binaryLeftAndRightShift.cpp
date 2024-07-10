// binary left shift (a<<b) = a * 2^b: binary digits are shifted b positions to the left; 
// binary right shift (a>>b) = a / 2^b: binary digits are shifted b positions to the right;

#include<iostream> 
using namespace std; 
int main(){
  int a = 10; // in binary representation: a = 1010
  cout << (a<<2); // in binary representation: a = 101000
}
