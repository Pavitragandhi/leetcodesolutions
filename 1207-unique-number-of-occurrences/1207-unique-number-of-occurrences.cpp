class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int , int> occurence_count;
        
        for(int i = 0; i<n; i++){
            occurence_count[arr[i]]++;
        }
        
        vector<int> store;
        for(auto num : occurence_count){
            if(find(store.begin() , store.end() , num.second) != store.end()){
                return false;
            }
            else{
                store.push_back(num.second);
            }
        }
        
        return true;
    }
};