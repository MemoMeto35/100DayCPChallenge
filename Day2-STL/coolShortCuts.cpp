int main(){
int minSum = *min_element(nums.begin(), nums.end()); // gets the smallest elemetn *for the pointer
int maxSum = accumulate(nums.begin(), nums.end(), 0/*initial sum*/); // sums all elements; 
int maxElement = *max_element(nums.begin(), nums.end()); // gets the max element;
int mid = left + (right - left) / 2; // better than (right+left)/2 because it doesn't overflow;
int res = (result + mod) % mod; // to get rid of negative mods;
string s = to_string(num); // convert it to string then sort all the digits to get the smallest possible num;
sort(s.begin(),s.end());
string s1(s.size(),'0'); // create a string with the same size as s and fill it with zeros
int c= count(s.begin(),s.end(),'1'); // count all the letters in s that are '1';
string s = to_string(num); // convert int to string to make dealing with digits easier; 
int num = stoi(s); // conver a string to s; 
int gcd = __gcd(num1, num2); // find the gcd; 
bool is_prime[N];
fill(is_prime, is_prime + N, true); // fill operator for arrays; 
sort(freq.rbegin(), freq.rend()); // sort accending
for(auto& it : map){pairs.push_back(it);} // iterate through a map and push to a vector of pairs;
sort(pairs.begin(), pairs.end(), [](auto& a, auto& b){return a.second > b.second;}); // sort a vector of pairs accendingly;
swap(head->val,head->next->val); // swapping ListNodes values; 
return result.substr(0, result.find_last_not_of(" ") + 1); // Remove trailing spaces
found = str.find_last_of(ch); // find the last char ch; 
found = str.find_last_not_of(ch); // find the last char that isnot ch; 
upper_bound(right_sums.begin(), right_sums.end(), x) - lower_bound(right_sums.begin(), right_sums.end(), x); // returns the number of recurrences of x; 
// lower_bound is the index of the first recurrence, upper_bound is the index of last recurrence + 1; 
  
for (int i = 0; i < (1 << n); i++) {
  for (int j = 0; j < n; j++) {
    if ((i >> j) & 1)
      cout << arr[j]; // generate all subsets of array;
  }
  cout << endl;
}
// Moving Zeros
int l=0;
for(int r=0;r<nums.size();r++){ if(nums[r]!=0){swap(nums[l],nums[r]); l++; }} // using two pointers; 
  
}
