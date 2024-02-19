class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size();
        unordered_map<char , int> store;
        
        for(int i = 0; i<n; i++){
            for(char c : words[i]){
                store[c]++;
            }
        }
        
        for(auto pair : store){
            if(pair.second%n != 0){
                return false;
            }
        }
        return true;
    }
};