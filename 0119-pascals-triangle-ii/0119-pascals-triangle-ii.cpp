class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> result(rowIndex+1);
        
        for(int i = 1; i<=rowIndex+1; i++){
            for(int j = 0; j<i; j++){
                if(j == 0 || j == i-1){
                    result[i-1].push_back(1);
                }
                else{
                    int sum = result[i-2][j-1] + result[i-2][j];
                    result[i-1].push_back(sum);
                }
            }
        }
        return result[rowIndex];
    }
};