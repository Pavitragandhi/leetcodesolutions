class Solution {
public:
    int countElements(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        sort(nums.begin() , nums.end());
        
        for(int i = 1; i<n-1; i++){
            bool smaller_check = false;
            bool greater_check = false;
            
            for(int j = 0; j<n; j++){
                if(i != j){
                    if(nums[j]<nums[i]){
                        smaller_check = true;
                    }
                    else if(nums[j]>nums[i]){
                        greater_check = true;
                    }
                }
            }
            if(smaller_check == true && greater_check == true){
                count++;
            }
        }
        
        return count;
    }
};