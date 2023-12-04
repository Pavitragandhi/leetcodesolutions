class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int result;
        
        sort(nums.begin() , nums.end());
        
        for(int i = 0; i<=n; i++){
            if(i == n){
                result = i;
            }
            else if(nums[i] != i){
                result = i;
                break;
            }
        }
        
        return result;
    }
};