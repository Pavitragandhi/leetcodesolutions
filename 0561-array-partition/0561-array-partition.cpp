class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int max_sum = 0;
        
        for(int i = 0; i<n; i+=2){
            int number = min(nums[i] , nums[i+1]);
            max_sum += number;
        }
        return max_sum;
    }
};