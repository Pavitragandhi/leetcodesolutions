class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        vector<int> store;
        
        for(int i = 0; i<n/2; i++){
            int sum = nums[i] + nums[n-i-1];
            store.push_back(sum);
        }
        
        return *max_element(store.begin() , store.end());
    }
};