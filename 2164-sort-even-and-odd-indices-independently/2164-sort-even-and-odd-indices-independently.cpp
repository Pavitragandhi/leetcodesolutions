class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even_index;
        vector<int> odd_index;
        int n = nums.size();
        
        for(int i = 0; i<n; i++){
            if(i%2 != 0){
                odd_index.push_back(nums[i]);
            }
            else{
                even_index.push_back(nums[i]);
            }
        }
        sort(even_index.begin() , even_index.end());
        sort(odd_index.begin() , odd_index.end() , [](int a , int b){
            return a>b;
        });
        
        int odd_count = 0;
        int even_count = 0;
        for(int i = 0; i<n; i++){
            if(i%2 != 0){
                nums[i] = odd_index[odd_count];
                odd_count++;
            }
            else{
                nums[i] = even_index[even_count];
                even_count++;
            }
        }
        return nums;
    }
};