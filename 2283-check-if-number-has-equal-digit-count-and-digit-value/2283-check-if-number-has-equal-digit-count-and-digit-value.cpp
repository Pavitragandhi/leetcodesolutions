class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int , int> store;
        int n = num.size();
        
        for(char c : num){
            store[c - '0']++;
        }
        
        for(int i = 0; i<n; i++){
            if((num[i] - '0') != store[i]){
                return false;
            }
        }
        return true;
    }
};