class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char , int> store_1;
        unordered_map<char , int> store_2;
        
        for(char c : s){
            store_1[c]++;
        }
        
        for(char c : target){
            store_2[c]++;
        }
        
        int result = INT_MAX;
        
        for(char c : target){
            if(store_1.find(c) == store_1.end()){
                return 0;
            }
            else{
                result = min(result , store_1[c]/store_2[c]);
            }
        }
        return result;
    }
};