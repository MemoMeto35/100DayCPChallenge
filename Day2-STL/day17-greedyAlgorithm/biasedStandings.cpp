#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main() {

	long long int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		vector<long long int> rank;
		for(long long int i = 0; i<n; i++){
			long long int expectedRank;
			string name;
			cin >> name >> expectedRank;
			rank.push_back(expectedRank);
		}
		sort(rank.begin(), rank.end());
		long long int badness = 0;
		for(long long int i = 1; i<=n; i++){
			badness += abs(i-rank[i-1]);
		}
		cout << badness << endl;
	}

	return 0;
}
