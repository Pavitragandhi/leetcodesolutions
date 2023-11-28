class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        
        for(int i = 0; i<n; i++){
            if(i%2 == 0 && nums[i]%2 != 0){
                int store = nums[i];
                for(int j = i+1; j<n; j++){
                    if(nums[j]%2 == 0){
                        nums[i] = nums[j];
                        nums[j] = store;
                        break;
                    }
                }
            }
            else if(i%2 != 0 && nums[i]%2 == 0){
                int store = nums[i];
                for(int j = i+1; j<n; j++){
                    if(nums[j]%2 != 0){
                        nums[i] = nums[j];
                        nums[j] = store;
                        break;
                    }
                }
            }
        }
        
        return nums;
    }
};