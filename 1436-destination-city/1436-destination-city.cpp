class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> store;
        
        for(auto source : paths){
            store.insert(source[0]);
        }
        
        string result;
        for(auto destination : paths){
            if(store.find(destination[1]) == store.end()){
                result = destination[1];
                break;
            }
        }
        return result;
    }
};