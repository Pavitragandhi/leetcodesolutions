class Solution {
public:
    vector<int> lastVisitedIntegers(vector<int>& nums) {
        deque<int> seen;
        vector<int> ans;
        int k = 0;
        int n = nums.size();
        
        for(int i = 0; i<n; i++){
            if(nums[i] > 0){
                seen.push_front(nums[i]);
                k = 0;
            }
            else{
                if(seen.size() > k){
                    ans.push_back(seen[k]);
                    k++;
                }
                else{
                    ans.push_back(-1);
                    k++;
                }
            }
        }
        
        return ans;
    }
};