class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 1) return 0;
        
        if(n == 2){
            return abs(nums[0] - nums[1]);
        }

        sort(nums.begin(), nums.end());
        int minimum = INT_MAX;

        for(int i = 0; i<=n-k; i++){
            int diff = nums[i + k - 1] - nums[i];
            minimum = min(minimum, diff);
        }

        return minimum;
    }
};