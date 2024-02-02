class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int> store;
        int result = 0;
        
        for(int i = n-1; i>=0; i--){
            result++;
            if(nums[i] <= k){
                store.insert(nums[i]);
            }
            
            if(store.size() == k){
                break;
            }
        }
        return result;
    }
};