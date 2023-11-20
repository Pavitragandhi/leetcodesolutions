class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> even_num;
        vector<int> odd_num;
        int n = nums.size();
        
        for(int i = 0; i<n; i++){
            if(nums[i]%2 == 0){
                even_num.push_back(nums[i]);
            }
            else{
                odd_num.push_back(nums[i]);
            }
        }
        even_num.insert(even_num.end() , odd_num.begin() , odd_num.end());
        return even_num;
    }
};