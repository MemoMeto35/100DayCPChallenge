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

}
