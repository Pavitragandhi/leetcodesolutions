class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        int count;
        
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(i != j && nums[j] < nums[i]){
                    count++;
                } 
            }
            
            result.push_back(count);
            count = 0;
        }
        
        return result;
    }
};