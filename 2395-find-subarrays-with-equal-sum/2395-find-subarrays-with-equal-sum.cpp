class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int n = nums.size();
        vector<int> store;
        
        for(int i = 0; i<n-1; i++){
            int sum = nums[i] + nums[i+1];
            if(find(store.begin() , store.end() , sum) != store.end()){
                return true;
            }
            else{
                store.push_back(sum);
            }
        }
        return false;
    }
};