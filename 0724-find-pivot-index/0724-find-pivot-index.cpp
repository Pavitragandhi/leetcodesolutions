class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total_sum = 0;
        int pivot = -1;
        int left_sum = 0;
        int n = nums.size();
        
        for(int i : nums){
            total_sum += i; 
        }
        
        for(int i = 0; i<n; i++){
            total_sum -= nums[i];
            
            if(total_sum == left_sum){
                pivot = i;
                break;
            }
            
            left_sum += nums[i];
        }
        
        return pivot;
    }
};