/*
you are playing a game with your 'k' friends. You have an array of N coins, at each index i you have a coin of value a[i]. 
Your taskt is to divide the coins, among a group of K friends by doing consecutive segments(k-subarrays) of the array. 
Each friend will get a total sum of the coins in that subarray. Since all your friends are greedy, and they will pick the largest k-1
segements and you will get the smallest segment. Find out the maximum value you can make by making an optimal Partition. 
Note: the coins array  may or may not be sorted.  
*/

#include <iostream> 
using namespace std; 
bool divideAmongK(int arr[], int n, int k, int min_coins){
  int partitions = 0; 
  int current_friend = 0;
  for(int i = 0; i<n; i++){
    if(current_friend + arr[i] >= min_coins){
      partitions += 1; 
      current_friend = 0;
    }
    else{
      current_friend += arr[i];
    }
  }
  return partitions >=k;
}
int k_partition(int *arr, int n, int k){
  int s = 0; 
  int e = 0; 
  for(int i =0; i<n; i++){
    e += arr[i];
  }
  int ans; 
  while(s<=e){
    int mid = (s+e)/2;
    bool isPossible = divideAmongK(arr, n, k, mid);
    if(isPossible){
      s = mid +1; 
      and = mid; 
    }else{
      e = mid -1; 
    }
  }
  return ans; 
}
int main(){
  int a[]= {1, 2, 3, 4};
  int n = sizeof(a)/sizeof(0);
  int k = 3; 
  cout << k_partition(a, n, k) << endl; 
  return 0;
  
}
