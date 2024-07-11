// generate all subsets of a given string
#include<iostream>
#include<cstring>
using namespace std;
void overLayBits(char arr[], int i){
  int j = 0;
  while(i){
    if(i&1)  cout << arr[j];
    i >>= 1;
    j++;
  }
  cout << endl;
}
void generateAllSubStrings(char arr[]){
  int n = strlen(arr);
  for(int i =0; i < (1<<n); i++){
    overLayBits(arr, i);
  }

}
int main(){
  char arr[1000];
  cin >> arr;
  generateAllSubStrings(arr);
  return 0;
}
