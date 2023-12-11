class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n = arr1.size();
        int m = arr2.size();
        int result = 0;
        
        for(int i = 0; i<n; i++){
            int count = 0;
            for(int j = 0; j<m; j++){
                if(abs(arr1[i] - arr2[j]) <= d){
                    break;
                }
                count++;
            }
            if(count/m == 1){
                result++;
            }
        }
        return result;
    }
};