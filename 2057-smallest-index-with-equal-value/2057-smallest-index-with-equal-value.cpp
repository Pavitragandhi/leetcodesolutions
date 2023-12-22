class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int n = nums.size();
        int minimum = n;
        bool check = false;
        
        for(int i = 0; i<n; i++){
            if(i%10 == nums[i]){
                check = true;
                minimum = min(minimum , i);
            }
        }
        if(check){
            return minimum;
        }
        
        return -1;
    }
};