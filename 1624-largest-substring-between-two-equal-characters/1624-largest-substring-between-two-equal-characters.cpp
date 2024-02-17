class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char , vector<int>> store;
        int n = s.size();
        int result = -1;
        
        for(int i = 0; i<n; i++){
             store[s[i]].push_back(i);
        }
        
        for(auto pair : store){
            if(pair.second.size() >= 2){
                int p = pair.second.size();
                if(pair.second[p-1] - pair.second[0] - 1 > result){
                    result = pair.second[p-1] - pair.second[0] - 1;
                }
            }
        }
        return result;
    }
};