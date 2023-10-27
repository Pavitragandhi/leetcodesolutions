class Solution {
public:
    
    std::string indicesToBinary(int indices){
        if(indices == 0){
            return "0";
        }
        
        std::string Binary_value = "";
        
        while(indices > 0){
            int value = indices%2;
            Binary_value = to_string(value) + Binary_value;
            indices /= 2;
        }
        
        return Binary_value;
    }
    
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        
        
        for(int i = 0; i<n; i++){
            string call = indicesToBinary(i);
            int count = 0;
            for(int j = 0; j<call.length(); j++){
                if(call[j] == '1'){
                    count++;
                }
            }
            if(count == k){
                sum += nums[i];
            }
        }
        
        return sum;
    }
};