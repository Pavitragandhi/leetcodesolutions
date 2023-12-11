class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n = arr.size();
        int p = n/20;
        sort(arr.begin() , arr.end());
        double sum = 0;
        double count = 0;
        
        for(int i = p; i<n-p; i++){
            sum += arr[i];
            count++;
        }
        double mean = sum/count;
        return mean;
    }
};