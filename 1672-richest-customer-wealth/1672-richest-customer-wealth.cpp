class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int k = accounts[0].size();
        vector<int> sum;
        int result = 0;
        
        for(int i = 0; i<n; i++){
            for(int j = 0; j<k; j++){
                result = result + accounts[i][j];
            }
            sum.push_back(result);
            result = 0;
        }
        
        return *max_element(sum.begin() , sum.end());
    }
};