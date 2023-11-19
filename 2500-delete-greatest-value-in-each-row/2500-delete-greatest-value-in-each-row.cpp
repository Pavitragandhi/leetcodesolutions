class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int answer = 0;
        
        for(int i = 0; i<m; i++){
            sort(grid[i].begin() , grid[i].end());
        }
        
        int maximum = 0;
        for(int j = 1; j<=n; j++){
            for(int i = 0; i<m; i++){
                int num = grid[i][n-j];
                maximum = max(maximum , num);
            }
            answer += maximum;
            maximum = 0;
        }
        return answer;
    }
};