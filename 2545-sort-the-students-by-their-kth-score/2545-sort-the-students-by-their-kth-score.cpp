class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int n = score.size();
        int m = score[0].size();
        map<int , int , greater<int>> store;
        
        for(int i = 0; i<n; i++){
            store[score[i][k]] = i;
        }
        
        vector<vector<int>> result;
        
        for(auto pair : store){
            result.push_back(score[pair.second]);
        }
        return result;
    }
};