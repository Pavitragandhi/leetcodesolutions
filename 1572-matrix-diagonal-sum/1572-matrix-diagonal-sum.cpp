class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int primary_daigonal_sum = 0;
        int secondary_daigonal_sum = 0;
        int result;
        
        for(int i = 0; i<n; i++){
            if(i == n-i-1){
                primary_daigonal_sum += mat[i][i];
            }
            else{
                primary_daigonal_sum += mat[i][i];
                secondary_daigonal_sum += mat[i][n-i-1];
            }
        }
        
        result = primary_daigonal_sum + secondary_daigonal_sum;
        return result;
    }
};