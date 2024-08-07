#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--){
		int x, y;
		cin >> x >> y>> n;
		if(n==0){
			cout << x  * y;
			return 0;
		}
		vector<int> xCoordinate;
		vector<int> yCoordinate;
		xCoordinate.push_back(0);
		yCoordinate.push_back(0);
		for(int i = 0; i<n; i++){
			int tx, ty;
			cin >> tx >> ty;
			xCoordinate.push_back(tx);
			yCoordinate.push_back(ty);
		}
		xCoordinate.push_back(x+1);
		yCoordinate.push_back(y+1);
		sort(xCoordinate.begin(), xCoordinate.end());
		sort(yCoordinate.begin(), yCoordinate.end());
		for(int i =0; i<xCoordinate.size()-1; i++){
			xCoordinate[i] = xCoordinate[i+1]-xCoordinate[i]-1;
			yCoordinate[i] = yCoordinate[i+1]-yCoordinate[i]-1;
		}
		xCoordinate.pop_back();
		yCoordinate.pop_back();
		int xMax = *max_element(xCoordinate.begin(), xCoordinate.end());
		int yMax = *max_element(yCoordinate.begin(), yCoordinate.end());
		cout << xMax*yMax << endl;
	}
	return 0;
}
