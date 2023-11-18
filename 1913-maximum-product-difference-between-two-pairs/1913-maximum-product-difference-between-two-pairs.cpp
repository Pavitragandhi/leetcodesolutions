class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int i = 0;
        int n = nums.size();
        
        int max_difference = (nums[n-1] * nums[n-2]) - (nums[0] * nums[1]);
        
        return max_difference;
    }
};