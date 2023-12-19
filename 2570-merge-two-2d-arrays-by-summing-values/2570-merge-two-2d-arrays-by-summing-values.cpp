class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> result;
        map<int , int> store;
        int n = nums1.size();
        int m = nums2.size();
        int i = 0 , j = 0;
        
        while(i<n || j<m){
            if(i<n){
                store[nums1[i][0]] += nums1[i][1];
                i++;
            }
            if(j<m){
                store[nums2[j][0]] += nums2[j][1];
                j++;
            }
        }
        
        for(auto num : store){
            result.push_back({num.first , num.second});
        }
        return result;
    }
};