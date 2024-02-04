class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        unordered_set<double> store;
        
        for(int i = 0; i<n/2; i++){
            double average  = (nums[i] + nums[n-1-i]);
            store.insert(average);
        }
        return store.size();
    }
};