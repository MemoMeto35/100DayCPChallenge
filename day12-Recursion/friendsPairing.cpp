// Given n friends who want to go to party, each one can remain single or can be paired up with some other friend. Each friend can be paired only once. Find out the total number of ways in which friends can remain single or can be paired up. 
/* The recursive way: 
  if one decides to go alone, then we have f(n-1)
  if one decides to pair up, then he will have (n-1) choices, the problems turns into f(n-2)
  so, f(n) = f(n-1) + (n-1)*f(n-2);
*/

#include<iostream>
using namespace std; 
int friendsPairs(int n){
  if(n<2) return 1; 
  return friendsPairs(n-1) + (n-1)friendsPairs(n-2);
}
int main(){
  int n; 
  cin >> n; 
  cout << friendsPairs(n);
}
