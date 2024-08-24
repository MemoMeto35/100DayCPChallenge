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
vector<pair<int,int>> temp(mp.begin(),mp.end());  // copy a map to a vector of pairs
sort(pairs.begin(), pairs.end(), [](auto& a, auto& b){return a.second > b.second;}); // sort a vector of pairs accendingly;
swap(head->val,head->next->val); // swapping ListNodes values; 
return result.substr(0, result.find_last_not_of(" ") + 1); // Remove trailing spaces
found = str.find_last_of(ch); // find the last char ch; 
found = str.find_last_not_of(ch); // find the last char that isnot ch; 
upper_bound(right_sums.begin(), right_sums.end(), x) - lower_bound(right_sums.begin(), right_sums.end(), x); // returns the number of recurrences of x; 
// lower_bound is the index of the first recurrence, upper_bound is the index of last recurrence + 1; 
// if lower_bound element doesn't exist the function returns an iterator of the first element that is not less than x; 
(lower_bound(potions.begin(), potions.end(), (double)success / spells[i]) - potions.begin()); // return the index of the the first value not less than x; 
auto r = equal_range(array.begin(), array.end(), x); // Using equal_range, the code becomes shorter; 
cout << r.second-r.first << "\n"; // finds the number of x elelments
reverse(v.begin(), v.end()); // reverses a vector
random_shuffle(v.begin(), v.end()); // random Shuffles a vector
string s = "monkey"; 
sort(s.begin(), s.end()); // ekmnoy
string c = b.substr(3,4); // starts at index 3, and counts 4 chars;
sortNums.insert(sortNums.begin()+insertedIndex, val); // insert at insertedIndex position, with value val; 
this->k= k; // nice way to globalize a variable; 
priority_queue<int, vector<int>, greater<int>> minHeap; // implementing mihHeap: minHeap.top() is the smallest; 
isdigit(chr); // checks if chr is digit; 
isalpha(chr); // checks if chr is alphabet
  
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

string sequence = "2943816729438167"; // the sequence of a magic square around the border;
// Flattened indices for bordering elements of 3x3 grid
vector<int> borderIndices = {0, 1, 2, 5, 8, 7, 6, 3};
for (int i : borderIndices) {
    int num = grid[row + i / 3][col + (i % 3)]; // nice formula
    border += to_string(num);
}
return (sequence.find(border) != string::npos || sequenceReversed.find(border) != string::npos); // string::npos is to makes sure that the substring exists; 
/////////////////////Flood Fill Algorithm /////////////////////
    // Directions for traversal: right, left, down, up
    const vector<vector<int>> DIRECTIONS = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    // Flood fill algorithm to mark all cells in a region
    void floodFill(vector<vector<int>>& expandedGrid, int row, int col) {
        queue<pair<int, int>> q;
        expandedGrid[row][col] = 1;
        q.push({row, col});
      
        while (!q.empty()) {
            auto [currentRow, currentCol] = q.front(); // nice trick for multible assigments
            q.pop();
            // Check all four directions from the current cell
            for (const auto& direction : DIRECTIONS) {
                int newRow = direction[0] + currentRow;
                int newCol = direction[1] + currentCol;
                // If the new cell is valid and unvisited, mark it and add to
                // queue
                if (isValidCell(expandedGrid, newRow, newCol)) {
                    expandedGrid[newRow][newCol] = 1;
                    q.push({newRow, newCol});
                }
            }
        }
    }

    // Check if a cell is within bounds and unvisited
    bool isValidCell(const vector<vector<int>>& expandedGrid, int row,
                     int col) {
        int n = expandedGrid.size();
        return row >= 0 && col >= 0 && row < n && col < n &&
               expandedGrid[row][col] == 0;
    }

  // check if n is prime/////////////////
bool isPrime(int n){
  if(n <= 1)
      return false;
  if(n==2 || n==3)
      return true;
  if(n%2==0 || n%3==0)
      return false;
  for(int i=5; i*i<=n; i+=6){
      if(n%i ==0 || n%(i+2)==0)
          return false;
  }
  return true;
}
////////////////////check if n is palindrome ///////////
bool isPalindrome(int n){
    string str = std::to_string(n); // don't forget to use std:: it just makes the code faster; 
    string temp = str;
    std::reverse(str.begin(), str.end());
    return str == temp;
}
  
//////////////////// if a number is a palindrome with even number of digits --> it is divisable by 11; 
  ///// so all prime palilndromes have an odd number of digits; 

/* An integer val is on one of the diagonals of nums if there exists an integer i 
for which nums[i][i] = val or an i for which nums[i][nums.size() - i - 1] = val.
*/

/////////////Longest Palindromic subString//////////////
class Solution {
public:
    std::string longestPalindrome(std::string s) {
        if (s.length() <= 1) {
            return s;
        }

        auto expand_from_center = [&](int left, int right) { // nice to expand both ways; 
            while (left >= 0 && right < s.length() && s[left] == s[right]) {
                left--;
                right++;
            }
            return s.substr(left + 1, right - left - 1);
        };

        std::string max_str = s.substr(0, 1);

        for (int i = 0; i < s.length() - 1; i++) {
            std::string odd = expand_from_center(i, i);
            std::string even = expand_from_center(i, i + 1);

            if (odd.length() > max_str.length()) {
                max_str = odd;
            }
            if (even.length() > max_str.length()) {
                max_str = even;
            }
        }

        return max_str;
    }
};
/// CGD of strings///
string gcdOfStrings(string str1, string str2) {
    if((str1+str2)!=(str2+str1)) return ""; // nice way to check for the commutivity of two strings
    int a = str1.size();
    int b = str2.size(); 
    int gcdR; 
    if(a>b){
        gcdR = gcd(a, b);
    }
    else gcdR = gcd(b, a);
    return str1.substr(0, gcdR);

}
int gcd(int a, int b){
    if(b==0) return a; 
    return gcd(b, a%b); 
}
// counting subsets whose max and min add to less than a target; 
      vector<long> dp(n + 1, 1);
        for(int i = 1; i <= n; ++i){
            dp[i] = (dp[i - 1] << 1) % k;
        }
        for(int i = 0, j = n - 1; i < n; ++i)
        {
            while(j >= i && nums[i] + nums[j] > target){
                --j;
            }
            if(i > j){
                continue;
            } 
            res = (res + dp[j - i]) % k; 
        }






}
