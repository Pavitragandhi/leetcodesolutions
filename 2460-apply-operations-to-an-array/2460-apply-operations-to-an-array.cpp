class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        
        while(i<n){
            if(i == n-1){
                break;
            }
            if(nums[i] == nums[i+1]){
                nums[i] *= 2;
                nums[i+1] = 0;
                i+=2;
            }
            else{
                i++;
            }
        }
        
        vector<int> result(n , 0);
        int count = 0;
        
        for(int i = 0; i<n; i++){
            if(nums[i] != 0){
                result[count] = nums[i];
                count++;
            }
        }
        return result;
    }
};