class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        int running_sum = 0;
        
        for(int i = 0; i<n; i++){
            running_sum += nums[i];
            result.push_back(running_sum);
        }
        
        return result;
    }
};