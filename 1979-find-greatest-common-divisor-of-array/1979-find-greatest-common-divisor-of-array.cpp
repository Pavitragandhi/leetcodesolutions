class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxValue = *max_element(nums.begin() , nums.end());
        int minValue = *min_element(nums.begin() , nums.end());
        vector<int> result;
        
        for(int i = 1; i<=minValue; i++){
            if(minValue%i == 0 && maxValue%i == 0){
                result.push_back(i);
            }
        }
        return *max_element(result.begin() , result.end());
    }
};