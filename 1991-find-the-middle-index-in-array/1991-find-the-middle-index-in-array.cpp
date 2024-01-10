class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total_sum = 0;
        int n = nums.size();
        int l_sum = 0;
        
        for(int i = 0; i<n; i++){
            total_sum += nums[i];
        }
        
        for(int i = 0; i<n; i++){
            total_sum -= nums[i];
            
            if(l_sum == total_sum){
                return i;
            }
            l_sum += nums[i];
        }
        
        return -1;
    }
};