class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin() , arr.end());
        int minimum = arr[1] - arr[0];
        
        for(int i = 1; i<n-1; i++){
            minimum = min(arr[i+1]-arr[i] , minimum);
        }
        
        vector<vector<int>> result;
        
        for(int i = 0; i<n-1; i++){
            if((arr[i+1] - arr[i]) == minimum){
                result.push_back({arr[i] , arr[i+1]});
            }
        }
        
        return result;
    }
};