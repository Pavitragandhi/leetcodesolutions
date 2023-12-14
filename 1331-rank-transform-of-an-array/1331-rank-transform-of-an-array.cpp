class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> copy = arr;
        sort(copy.begin() , copy.end());
        
        unordered_map<int , int> store;
        int count = 1;
        
        for(int i = 0; i<n; i++){
            if(i == n-1){
                store[copy[i]] = count;
                break;
            }
            store[copy[i]] = count;
            
            if(copy[i] != copy[i+1]){
                count++;
            }
        }
        vector<int> result;
        for(int i = 0; i<n; i++){
            result.push_back(store[arr[i]]);
        }
        return result;
    }
};