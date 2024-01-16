class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int start_value = 1;
        int sum = 0;
        
        for(int num : nums){
            sum += num;
            start_value = max(start_value , 1 - sum);
        }
        return start_value;
    }
};