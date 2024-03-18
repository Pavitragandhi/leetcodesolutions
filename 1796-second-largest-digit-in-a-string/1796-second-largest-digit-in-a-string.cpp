class Solution {
public:
    int secondHighest(string s) {
        set<int> store;
        
        for(char c : s){
            if(isdigit(c)){
                int digit = c - '0';
                store.insert(digit);
            }
        }
        
        if(store.size() < 2){
            return -1;
        }
        
        auto it = store.end();
        it--;
        it--;
        
        int result = *it;
        return result;
    }
};