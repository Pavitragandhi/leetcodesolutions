class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> left;
        vector<int> right;
        vector<int> p;

    for (int num : nums) {
        if (num < pivot) {
            left.push_back(num);
        } else if (num > pivot) {
            right.push_back(num);
        } else {
            p.push_back(num);
        }
    }

    nums = left;
    nums.insert(nums.end(), p.begin(), p.end());
    nums.insert(nums.end(), right.begin(), right.end());

    return nums;
 }

};