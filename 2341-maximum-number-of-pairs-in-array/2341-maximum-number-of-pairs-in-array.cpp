class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        sort(nums.begin() , nums.end());
        int i = 0;
        
        while(i<n-1){
            if(nums[i] == nums[i+1]){
                count++;
                i+=2;
            }
            else{
                i++;
            }
        }
        int remain = n - (count*2);
        return {count , remain};
    }
};