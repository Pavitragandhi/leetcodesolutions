class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        sort(nums.begin() , nums.end());
        
        for(int i = 0; i<n; i++){
            if(nums[i] == 0){
                continue;
            }
            else{
                count++;
                int x = nums[i];
                for(int j = i; j<n; j++){
                    nums[j] -= x;
                }
            }
        }
        return count;
    }
};