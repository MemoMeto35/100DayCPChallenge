#include<iostream>
using namespace std;

int main(){
  int a;  
  cin >> a; 
  (a&1) ? cout << "Odd" : cout <<"Even";
}