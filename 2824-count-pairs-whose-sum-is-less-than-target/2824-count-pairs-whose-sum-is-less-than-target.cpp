class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = nums.size();
        int result = 0;
        
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(i == j){
                    break;
                }
                
                int sum = nums[i] + nums[j];
                
                if(sum < target){
                    result++;
                }
            }
        }
        
        return result;
    }
};