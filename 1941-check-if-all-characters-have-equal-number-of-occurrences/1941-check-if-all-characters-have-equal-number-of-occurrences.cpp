class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char , int> store;
        
        for(char c : s){
            store[c]++;
        }
        unordered_set<int> check;
        for(auto pair : store){
            check.insert(pair.second);
        }
        
        return check.size() == 1;
    }
};