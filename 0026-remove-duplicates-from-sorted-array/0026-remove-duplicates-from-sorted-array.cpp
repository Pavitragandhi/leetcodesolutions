class Solution {
public:
    int removeDuplicates(vector<int>& nums) {     
        int n = nums.size();
        if(n == 0){ 
           return 0;
        }

        int uniqueCount = 1;
        int currentNum = nums[0];

        for(int i = 1; i < n; ++i){
            if(nums[i] != currentNum){
                currentNum = nums[i];
                nums[uniqueCount] = currentNum;
                uniqueCount++;
            }
        }

        return uniqueCount;
    }
};