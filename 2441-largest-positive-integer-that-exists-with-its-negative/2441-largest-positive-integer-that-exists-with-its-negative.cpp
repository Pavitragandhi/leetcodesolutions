class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        int result = -1;
        
        for(int i = n-1; i>=0; i--){
            if(find(nums.begin() , nums.end() , -nums[i]) != nums.end()){
                result = nums[i];
                break;
            }
        }
        
        return result;
    }
};