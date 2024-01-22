class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size();
        int m = mat[0].size();
        
        if(n*m != r*c){
            return mat;
        }
        
        vector<int> store;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                store.push_back(mat[i][j]);
            }
        }
        
        vector<vector<int>> result(r , vector<int>(c));
        int count = 0;
        for(int i = 0; i<r; i++){
            for(int j = 0; j<c; j++){
                result[i][j] = store[count];
                count++;
            }
        }
        
        return result;
    }
};