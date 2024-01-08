class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int , int> store;
        
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(grid[i][j] == 1){
                    store[i]++;
                }
            }
        }
        
        map<int , int , greater<>> result;
        for(auto pair : store){
            result[pair.second] = pair.first;
        }
        auto it = result.begin();
        
        return it->second;
    }
};