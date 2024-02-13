class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char , int> store;
        char result;
        
        for(char c : s){
            store[c]++;
            
            if(store[c] == 2){
                result = c;
                break;
            }
        }
        return result;
    }
};