class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int n = nums.size();
        int element;
        int max_score = 0;
        sort(nums.begin() , nums.end());
        
        for(int i = 0; i<k; i++){
            element = nums[n-1];
            nums.pop_back();
            max_score += element;
            element += 1;
            nums.push_back(element);
        }
        
        return max_score;
    }
};