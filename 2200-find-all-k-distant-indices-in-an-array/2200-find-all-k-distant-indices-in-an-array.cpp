class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        unordered_set<int> store;
        
        for(int i = 0; i<n; i++){
            if(nums[i] == key){
                for(int j = 0; j<n; j++){
                    if(abs(i-j) <= k){
                        store.insert(j);
                    }
                }
            }
        }
        vector<int> result(store.begin() , store.end());
        sort(result.begin() , result.end());
        return result;
    }
};