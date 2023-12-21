class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        
        auto find_K_Element = [&](int k){
            int i = 0, j = 0;

            while (i < m || j < n){
                if (i >= m){
                    return nums2[j+k-1];
                }
                if (j >= n){
                    return nums1[i+k-1];
                }

                int x = nums1[i];
                int y = nums2[j];

                if (k == 1){
                    return std::min(x, y);
                }

                int p = k / 2;
                int id_1 = std::min(i + p, m) - 1;
                int id_2 = std::min(j + p, n) - 1;

                if (nums1[id_1] < nums2[id_2]){
                    k -= id_1 - i + 1;
                    i = id_1 + 1;
                } 
                else{
                    k -= id_2 - j + 1;
                    j = id_2 + 1;
                }
            }
            return -1;
        };

       int total = m + n;
       int mid1 = find_K_Element((total + 1) / 2);
       int mid2 = find_K_Element((total + 2) / 2);
       return (mid1 + mid2) / 2.0;
    }
};