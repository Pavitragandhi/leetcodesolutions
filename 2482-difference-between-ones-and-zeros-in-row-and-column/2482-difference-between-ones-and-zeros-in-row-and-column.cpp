class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> result(n , vector<int>(m));
        
        vector<int> row_ones;
        vector<int> column_ones;
        
        for(int i = 0; i<n; i++){
            int sum = 0;
            for(int j = 0; j<m; j++){
                sum += grid[i][j];
            }
            row_ones.push_back(sum);
        }
        
        for(int i = 0; i<m; i++){
            int sum = 0;
            for(int j = 0; j<n; j++){
                sum += grid[j][i];
            }
            column_ones.push_back(sum);
        }
        
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                result[i][j] = row_ones[i] + column_ones[j] - (n - row_ones[i]) - (m - column_ones[j]);
            }
        }
        
        return result;
    }
};