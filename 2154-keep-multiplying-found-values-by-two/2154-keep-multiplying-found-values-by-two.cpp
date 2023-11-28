class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n = nums.size();
        
        for(int i = 0; i<n; i++){
            if(find(nums.begin() , nums.end() , original) != nums.end()){
                original = 2*original;
            }
            else{
                break;
            }
        }
        
        return original;
    }
};