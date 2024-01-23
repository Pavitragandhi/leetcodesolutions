class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int n = nums.size();
        int pos_1 , pos_2;
        
        for(int i = 0; i<n; i++){
            if(nums[i] == 1){
                pos_1 = i;
            }
            else if(nums[i] == n){
                pos_2 = i;
            }
        }
        if(pos_1 < pos_2){
            return pos_1 + (n-1 - pos_2);
        }
        else{
            return pos_1 + (n-1 - pos_2) - 1;
        }
    }
};