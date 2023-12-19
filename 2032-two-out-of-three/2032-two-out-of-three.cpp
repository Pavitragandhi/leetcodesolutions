class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_set<int> unique1(nums1.begin() , nums1.end());
        unordered_set<int> unique2(nums2.begin() , nums2.end());
        unordered_set<int> unique3(nums3.begin() , nums3.end());
        
        unordered_set<int> result;
        
        for(int number : unique1){
            if(unique2.count(number) || unique3.count(number)){
                result.insert(number);
            }
        }
        
        for(int number : unique2){
            if(unique1.count(number) || unique3.count(number)){
                result.insert(number);
            }
        }
        
        for(int number : unique3){
            if(unique2.count(number) || unique1.count(number)){
                result.insert(number);
            }
        }
        
        vector<int> ans(result.begin() , result.end());
        return ans;
    }
};