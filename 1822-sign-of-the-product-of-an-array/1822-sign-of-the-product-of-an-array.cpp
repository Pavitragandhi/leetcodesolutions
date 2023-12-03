class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n = nums.size();
        int product = 1;
        
        if(find(nums.begin() , nums.end() , 0) != nums.end()){
            return 0;
        }
        
        for(int num : nums){
            if(num>0){
                product *= 1;
            }
            else{
                product *= -1;
            }
        }
        
        if(product > 0){
            return 1;
        }
        else{
            return -1;
        }
        
    }
};