#include<iostream>
using namespace std; 

int main(){
  int n; 
  cin >> n; 
  n & (n-1) ? cout << "Not Power of 2" : cout << "Power of 2";
}
