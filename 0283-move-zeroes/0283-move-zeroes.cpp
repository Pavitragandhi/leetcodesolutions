class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        
        for(int i = 0; i<n; i++){
            if(nums[i] == 0){
                nums.erase(nums.begin() + i);
                count++;
                i--;
                n--;
            }
        }
        
        for(int i = 0; i<count; i++){
            nums.push_back(0);
        }
    }
};