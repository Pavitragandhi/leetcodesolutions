class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> store1;
        vector<int> store2;
        
        unordered_set<int> set1(nums1.begin() , nums1.end());
        unordered_set<int> set2(nums2.begin() , nums2.end());
        
        for(int number : set1){
            if(set2.find(number) == set2.end()){
                store1.push_back(number);
            }
        }
        
        for(int number : set2){
            if(set1.find(number) == set1.end()){
                store2.push_back(number);
            }
        }
        
        return {store1 , store2};
    }
};