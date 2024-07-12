class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n = groupSizes.size();
        unordered_map<int , vector<int>> store;
        
        for(int i = 0; i<n; i++){
            store[groupSizes[i]].push_back(i);
        }
        
        vector<vector<int>> result;
        
        for(auto pair : store){
            int check = pair.second.size();
            
            if(check == pair.first){
                result.push_back(pair.second);
            }
            else{
                for(int i = 0; i<check; i += pair.first){
                    result.emplace_back(pair.second.begin()+i , pair.second.begin()+i+pair.first);
                }
            }
        }
        return result;
    }
};