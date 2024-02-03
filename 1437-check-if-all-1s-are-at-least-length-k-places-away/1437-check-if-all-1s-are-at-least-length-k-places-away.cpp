class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        vector<int> check;
        int n = nums.size();
        
        for(int i = 0; i<n; i++){
            if(nums[i] == 1){
                check.push_back(i);
            }
        }
        if(check.empty() || check.size() == 1){
            return true;
        }
        for(int i = 0; i<check.size()-1; i++){
            if((check[i+1] - check[i] - 1) < k){
                return false;
            }
        }
        return true;
    }
};