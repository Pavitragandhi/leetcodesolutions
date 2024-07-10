class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int mid = left + (right - left)/2;
        int result = 0;
        
        while(left <= right){
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                left = mid + 1;
                result = mid + 1;
            }
            else{
                right = mid - 1;
            }
            
            mid = left + (right - left)/2;
        }
        return result;
    }
};