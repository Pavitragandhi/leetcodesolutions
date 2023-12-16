class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int count1 = 0;
        int count2 = 0;
        
        for(int i = 0; i<n; i++){
            if(find(nums2.begin() , nums2.end() , nums1[i]) != nums2.end()){
                count1++;
            }
        }
        
        for(int i = 0; i<m; i++){
            if(find(nums1.begin() , nums1.end() , nums2[i]) != nums1.end()){
                count2++;
            }
        }
        return {count1 , count2};
    }
};