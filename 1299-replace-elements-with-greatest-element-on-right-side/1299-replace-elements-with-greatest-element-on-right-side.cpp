class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int maximum = -1;
        
        for(int i = n-1; i>=0; i--){
            int compare = arr[i];
            arr[i] = maximum;
            maximum = max(maximum , compare);
        }
        return arr;
    }
};