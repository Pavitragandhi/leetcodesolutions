class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> store1;
        vector<int> store2;
        int n = arr1.size();
        int m = arr2.size();
        sort(arr1.begin() , arr1.end());
        
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(arr2[i] == arr1[j]){
                    store1.push_back(arr1[j]);
                }
            }
        }
        
        for(int i = 0; i<n; i++){
            if(find(arr2.begin() , arr2.end() , arr1[i]) == arr2.end()){
                store2.push_back(arr1[i]);
            }
        }
        store1.insert(store1.end() , store2.begin() , store2.end());
        return store1;
    }
};