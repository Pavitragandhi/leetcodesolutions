class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        
        auto findKthElement = [&](int k){
            int i = 0, j = 0;

            while (i < m || j < n){
                if (i >= m){
                    return nums2[j + k - 1];
                }
                if (j >= n){
                    return nums1[i + k - 1];
                }

                int x = nums1[i];
                int y = nums2[j];

                if (k == 1){
                    return std::min(x, y);
                }

                int p = k / 2;
                int idx1 = std::min(i + p, m) - 1;
                int idx2 = std::min(j + p, n) - 1;

                if (nums1[idx1] < nums2[idx2]){
                    k -= idx1 - i + 1;
                    i = idx1 + 1;
                } 
                else{
                    k -= idx2 - j + 1;
                    j = idx2 + 1;
                }
            }
            return -1;
        };

       int total = m + n;
       int mid1 = findKthElement((total + 1) / 2);
       int mid2 = findKthElement((total + 2) / 2);

       return (mid1 + mid2) / 2.0;
    }
};