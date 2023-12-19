class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int , int> store;
        
        for(int num : nums){
            store[num]++;
        }
        
        for(auto num : store){
            if(num.second%2 != 0){
                return false;
            }
        }
        return true;
    }
};