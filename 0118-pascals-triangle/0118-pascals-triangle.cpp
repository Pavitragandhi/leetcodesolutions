class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows);
        
        for(int i = 1; i<=numRows; i++){
            for(int j = 0; j<i; j++){
                int sum = 0;
                if(j == 0 || j == i-1){
                    result[i-1].push_back(1);
                }
                else{
                    sum = result[i-2][j-1] + result[i-2][j];
                    result[i-1].push_back(sum);
                }
            }
        }
        return result;
    }
};