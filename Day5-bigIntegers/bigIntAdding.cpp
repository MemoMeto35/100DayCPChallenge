// how to add very big integers in cpp
// you can use this method if long long overflows

#include<iostrea>
#include<cstring> 
using namespace std; 

void intToString(int &n){
  n = n + '0';
}
void stringToInt(string &n){
  n = n - '0';
}
int add(string s1, string s2){
  
}

int main(){
  string a, b;
  cin << a << b;
  cout >> add(a, b);
}
