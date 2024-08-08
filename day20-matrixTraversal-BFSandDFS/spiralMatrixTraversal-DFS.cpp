// input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// output: [1,2,3,6,9,8,7,4,5]
class Solution {
public:
    void dfs(vector<vector<int>>& matrix, int row, int col, vector<vector<bool>>& seen, vector<int>& values, vector<vector<int>>& directions){
        if(row < 0 || col < 0 || row >= matrix.size() || col >= matrix[0].size() || seen[row][col]) return;
        seen[row][col] = true;
        values.push_back(matrix[row][col]);
        for(int i = 0; i<directions.size(); i++){
            int xDirection = directions[i][0];
            int yDirection = directions[i][1];
            if(i==3) // A very important step to prevent folding
            {directions.push_back({directions[0][0], directions[0][1]});
            directions.erase(directions.begin());}
            dfs(matrix, row+xDirection, col+yDirection, seen, values, directions);
        }
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<vector<bool>> seen(matrix.size(), (vector<bool>(matrix[0].size(), false)));
        vector<int> values; 
        vector<vector<int>> directions = {
        {0, 1}, // right
        {1, 0}, // down
        {0, -1}, //left
        {-1, 0} // up
        };
        dfs(matrix, 0, 0, seen, values, directions);
        return values; 
    }
};
