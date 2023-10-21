class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       int starting_position = -1, ending_position = -1;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == target) {
            starting_position = i;
            break;
        }
    }

    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] == target) {
            ending_position = i;
            break;
        }
    }

    return {starting_position, ending_position};
        
 }
};