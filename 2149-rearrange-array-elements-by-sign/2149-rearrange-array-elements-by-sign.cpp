class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        vector<int> positive;
        vector<int> negative;
        
        for(int num : nums){
            if(num > 0){
                positive.push_back(num);
            }
            else{
                negative.push_back(num);
            }
        }
        
        for(int i = 0; i<n/2; i++){
            result.push_back(positive[i]);
            result.push_back(negative[i]);
        }
        return result;
    }
};