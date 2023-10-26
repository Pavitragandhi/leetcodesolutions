class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        
        for(int i = 0; i<n; i+=2){
            int freq = nums[i];
            int value = nums[i+1];
            
            for(int j = 0; j<freq; j++){
                result.push_back(value);
            }
        }
        
        return result;
    }
};