class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long con_sum = 0;
        
        while (!nums.empty()){
            if(nums.size() > 1){
                int concat_value = stoi(to_string(nums.front()) + to_string(nums.back()));
                con_sum += concat_value;

                nums.erase(nums.begin());
                nums.pop_back();
            }
            else{
                con_sum += nums.front();
                nums.pop_back();
            }
        }
        
        return con_sum;
    }
};