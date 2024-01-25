class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        int in_count = 0;
        int de_count = 0;
        
        for(int i = 0; i<n-1; i++){
            if(nums[i] < nums[i+1]){
                in_count++;
            }
            else if(nums[i] > nums[i+1]){
                de_count++;
            }
            
            if(in_count != 0 && de_count != 0){
                return false;
            }
        }
        return true;
    }
};