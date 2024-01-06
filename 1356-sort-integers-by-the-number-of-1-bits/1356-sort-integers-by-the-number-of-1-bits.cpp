class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        multimap<int , int> store;
        vector<int> result;
        int n = arr.size();
        sort(arr.begin() , arr.end());
        
        for(int i = 0; i<n; i++){
            bitset<32> binaryconvert(arr[i]);
            store.insert({binaryconvert.count() , arr[i]});
        }
        
        for(auto num : store){
            result.push_back(num.second);
        }
        return result;
    }
};