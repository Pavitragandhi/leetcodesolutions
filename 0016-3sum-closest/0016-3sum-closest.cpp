class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
       int closestSum = std::numeric_limits<int>::max();
        int closestDifference = std::numeric_limits<int>::max();
        
        for (int i = 0; i < nums.size() - 2; i++) {
            for (int j = i + 1; j < nums.size() - 1; j++) {
                for (int k = j + 1; k < nums.size(); k++) {
                    int currentSum = nums[i] + nums[j] + nums[k];
                    int currentDifference = std::abs(currentSum - target);
                    
                    if (currentDifference < closestDifference) {
                        closestDifference = currentDifference;
                        closestSum = currentSum;
                    }
                }
            }
        }
        
        return closestSum; 
    }
};