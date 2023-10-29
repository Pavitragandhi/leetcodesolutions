class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int element_sum = 0;
        int digit_sum = 0;
        
        for(int i = 0; i<n; i++){
            element_sum += nums[i];
        }
        
        for(int num : nums){
            while(num > 0){
                int number = num % 10;
                digit_sum += number;
                num /= 10;
            }
        }
        
        return abs(element_sum - digit_sum);
    }
};