class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        //sort(mat.begin() , mat.end());
        int max_ones = 0;
        int row;
        
        for(int i = 0; i<n; i++){
            int count = 0;
            sort(mat[i].begin() , mat[i].end());
            for(int j = 0; j<m; j++){
                if(mat[i][j] == 1){
                    count = m-j;
                    break;
                }
            }
            if(max_ones < count){
                max_ones = count;
                row = i;
            }
        }
        return {row , max_ones};
    }
};