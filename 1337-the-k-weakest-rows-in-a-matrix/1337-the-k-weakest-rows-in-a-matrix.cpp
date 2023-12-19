class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        multimap<int , int> store;
        int n = mat.size();
        int m = mat[0].size();
        
        for(int i = 0; i<n; i++){
            int count = 0;
            for(int j = 0; j<m; j++){
                if(mat[i][j] == 1 && j != m-1){
                    count++;
                }
                else if(j == m-1 && mat[i][j] == 1){
                    count++;
                    store.insert(make_pair(count , i));
                }
                else{
                    store.insert(make_pair(count , i));
                    break;
                }
            }
        }
        vector<int> result;
        for(auto num : store){
            if(k>0){
                result.push_back(num.second);
            }
            else{
                break;
            }
            k--;
        }
        return result;
    }
};