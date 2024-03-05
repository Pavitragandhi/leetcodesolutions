class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        unordered_map<char , int> store;
        
        for(int i = 0; i<n; i++){
            store[s[i]]++;
        }
        
        for(int i = 0; i<n; i++){
            if(store[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};