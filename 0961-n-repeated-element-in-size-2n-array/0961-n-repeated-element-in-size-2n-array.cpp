class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int> store;

        for(int num : nums){
            if(store.count(num) > 0){
                return num;
            }
            store.insert(num);
        }
        return -1;
    }
};