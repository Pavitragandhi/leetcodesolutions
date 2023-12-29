class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int result = 0;
        int n = nums.size();
        
        for(int i = 0; i<n; i++){
            int count = 0;
            int store = nums[i];
            while(store>0){
                count++;
                store /= 10;
            }
            
            if(count%2 == 0){
                result++;
            }
        }
        return result;
    }
};