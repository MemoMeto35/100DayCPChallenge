#include <iostream>
using namespace std;

int getIthBit(int n, int i){
  int mask = (1<<i);
  return (n & mask) ? 1 : 0; // note that this is zero based indexing
}
void setIthBit(int &n, int i){ // you need to pass n by reference to change n without making a copy.
  int mask = (1<<i);
  n = (n|mask); // | is binary or;
}
void clearIthBit(int &n, int i){
  int mask = ~(1<<i); //makes all the binary digits ones except the Ith bit;
  n = (n & mask);
}
void updateIthBit(int &n, int i, int v){
  clearIthBit(n, i);
  int mask = v<<i;
  n = n | mask;
}
void clearLastIBits(int &n, int i){
  int mask = (~0)<<i;
  n = n & mask;
}
void clearBitsInRange(int &n, int i, int j){
  int a = (~0) << j; 
  int b = (1 << i) - 1; 
  int mask = a|b; 
  n = mask & n; 
}
void replaceBits(int &n, int i, int j, int m){
  clearBitsInRange(n, i, j); 
  int mask = m << i; 
  n = n | mask; 
}
int main(){
  int n = 5; // 101
  getIthBit(n, 1); // 0
    cout << getIthBit(n, 1) << endl;
  setIthBit(n, 1); // 7 = 111
    cout << n << endl;
  clearIthBit(n, 0); // 6 = 110
    cout << n << endl;
  updateIthBit(n, 2, 0); // 2 = 010
    cout << n << endl;
  clearLastIBits(n, 3); // 0 = 000
    cout << n << endl;
  int a = 63; // 111111
  clearBitsInRange(a, 1, 3);  // 57 = 110001  
  cout << a << endl; 
  int b = 127; // 1111111
  int c = 10; // 1010
  replaceBits(b, 2, 5, c); // 107 = 1101011
  cout << b << endl; 

}
