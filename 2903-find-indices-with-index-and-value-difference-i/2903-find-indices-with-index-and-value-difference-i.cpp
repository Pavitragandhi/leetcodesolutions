class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int n = nums.size();
        vector<int> answer(2 , -1);
        
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(abs(i-j) >= indexDifference && abs(nums[i] - nums[j]) >= valueDifference){
                    answer[0] = i;
                    answer[1] = j;
                    return answer;
                }
            }
        }
        return answer;
    }
};