class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
          vector<vector<int>> quadruplets;
    int n = nums.size();
    
    if (n < 4)
        return quadruplets;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 3; ++i) {
        // Avoid duplicate quadruplets
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        for (int j = i + 1; j < n - 2; ++j) {
            // Avoid duplicate quadruplets
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;

            int left = j + 1;
            int right = n - 1;

            while (left < right) {
                long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[left] + nums[right];

                if (sum == target) {
                    quadruplets.push_back({nums[i], nums[j], nums[left], nums[right]});
                    
                    // Avoid duplicate quadruplets
                    while (left < right && nums[left] == nums[left + 1])
                        left++;
                    while (left < right && nums[right] == nums[right - 1])
                        right--;

                    left++;
                    right--;
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
    }

    return quadruplets;
    }
};