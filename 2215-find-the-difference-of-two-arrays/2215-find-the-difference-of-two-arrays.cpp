class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> store1;
        vector<int> store2;
        
        for(int i = 0; i<n; i++){
            if(find(nums2.begin() , nums2.end() , nums1[i]) == nums2.end() && find(store1.begin() , store1.end() , nums1[i]) == store1.end()){
                store1.push_back(nums1[i]);
            }
        }
        
        for(int i = 0; i<m; i++){
            if(find(nums1.begin() , nums1.end() , nums2[i]) == nums1.end() && find(store2.begin() , store2.end() , nums2[i]) == store2.end()){
                store2.push_back(nums2[i]);
            }
        }
        
        return {store1 , store2};
    }
};