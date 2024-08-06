// time: O(nlogn); 
// space: O(n);
#include<iostream> 
#include<vector>
using namespace std; 
void merge(vector<int> &arr, int s, int e){
  int i = s; 
  int m = s + (e-s)/2; 
  int j = m+1; 
  vector<int> temp; 
  while(i<=m && j<= e){
    if(arr[i] < arr[j]){
      temp.push_back(arr[i++]);
    }
    else{
      temp.push_back(arr[j++]);
    }
  }
  // copy remaining element from first array
  while(i<=m) temp.push_back(arr[i++]);
  while(j<=e) temp.push_back(arr[j++]);
  // copy back the elements from temp to original
  int k = 0; 
  for(int inx = s; idx <=e; idx++){
    arr[idx]=temp[k++];
  }
  return; 
}
void mergesort(vector<int> &arr, int start, int end){
  if(start>= end)
     return; 
  int mid = start +(end-start)/2; 
  mergesort(arr, start, mid);
  mergesort(arr, mid+1, end); 
  return merger(arr, start, end);
}
int main(){
  vector<int> arr{10, 5, 2, 0, 7, 6, 4}; 
  int s = 0, e = arr.size()-1; 
  mergesort(arr,s,e); 
  for(int x : arr){
    cout << x << ",";
  }
  cout <<  endl; 
  return 0; 
}
