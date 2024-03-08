class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char , int> store;
        
        for(char c : text){
            store[c]++;
        }
        
        unordered_map<char , int> ballon_char = {
            {'b', 1}, {'a', 1}, {'l', 2}, {'o', 2}, {'n', 1}
        };
        
        int result = INT_MAX;
        for(auto pair : ballon_char){
            char ch = pair.first;
            int num = pair.second;
            
            if(store.find(ch) == store.end()){
                return 0;
            }
            
            result = min(result , store[ch]/num);
        }
        return result;
    }
};