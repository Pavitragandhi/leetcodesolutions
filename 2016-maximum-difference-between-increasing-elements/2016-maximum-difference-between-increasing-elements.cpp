class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maximum = -1;
        int n = nums.size();
        
        for(int i = 0; i<n-1; i++){
            for(int j = i+1; j<n; j++){
                if(nums[j] > nums[i]){
                    int diff = nums[j] - nums[i];
                    maximum = max(maximum , diff);
                }
            }
        }
        return maximum;
    }
};