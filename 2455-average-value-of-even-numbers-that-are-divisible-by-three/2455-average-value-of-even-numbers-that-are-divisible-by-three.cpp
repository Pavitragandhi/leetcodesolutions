class Solution {
public:
    int averageValue(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int count = 0;
        
        for(int i = 0; i<n; i++){
            if(nums[i]%3 == 0 && nums[i]%2 == 0){
                sum += nums[i];
                count++;
            }
        }
        if(sum == 0){
            return 0;
        }
        sum /= count;
        return ceil(sum);
    }
};