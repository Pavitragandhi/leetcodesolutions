class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string , vector<string>> store;
        
        for(string check : strs){
            string s = check;
            sort(s.begin() , s.end());
            store[s].push_back(check);
        }
        
        vector<vector<string>> result;
        
        for(auto pair : store){
            result.push_back(pair.second);
        }
        return result;
    }
};