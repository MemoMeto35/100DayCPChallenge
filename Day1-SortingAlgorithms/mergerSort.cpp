// assume that the merge method exists and works in O(N)
// This code show the logic for the recursion of the merge sorting

void mergeSort(vector<int> &arr, int starting, int ending){
    if(starting>=ending) return; // base case
    // recursive case
    
    int mid = (starting + ending)/2; 
    mergeSort(arr, starting, mid); 
    mergeSort(arr, mid+1, ending); 
    return merge(arr, starting, ending); 
}
