class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int , int> majority_count;
        int n = nums.size();
        
        for(int i = 0; i<n; i++){
            majority_count[nums[i]]++;
        }
        
        map<int , int , greater<int>> swap;
        for(auto pair : majority_count){
            swap[pair.second] = pair.first;
        }
        
        int maximum = 0;
        for(auto anwser : swap){
            maximum = anwser.second;
            break;
        }
        
        return maximum;
    }
};