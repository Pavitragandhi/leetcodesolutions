class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , int> check;
        
        for(int num : nums){
            check[num]++;
        }
        
        int maximum = 0;
        
        for(auto pair : check){
            if(pair.second > maximum){
                maximum = pair.second;
            }
        }
        
        vector<vector<int>> result(maximum);
        unordered_map<int , int> check_2;
        
        for(int num : nums){
            int line = check_2[num] % maximum;
            result[line].push_back(num);
            check_2[num]++;
        }
        return result;
    }
};