// Spoj, I Am very Busy
// return the maximum number of events that can be done. 
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

	// your code here
	int t, n;
	cin >> t;
	while(t--){
		vector<pair<int, int>> pairs;
		cin >> n;
		for(int i = 0; i< n; i++){
			int s, e;
			cin >> s >> e;
			pairs.push_back({e,s});
		}
		sort(pairs.begin(), pairs.end());
		int res = 1;
		int start = pairs[0].second;
		int ending = pairs[0].first;
		for(int i = 0; i<pairs.size(); i++){
			if(pairs[i].second >= ending){
                ending = pairs[i].first;
                res++;
			}

		}
		cout << res << endl;
	}

	return 0;
}
