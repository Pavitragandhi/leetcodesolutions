class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char , int> ran_store;
        unordered_map<char , int> mag_store;
        
        if(ransomNote.size() > magazine.size()){
            return false;
        }
        
        for(char c : ransomNote){
            ran_store[c]++;
        }
        
        for(char c : magazine){
            mag_store[c]++;
        }
        
        for(auto pair : ran_store){
            if(pair.second > mag_store[pair.first]){
                return false;
            }
        }
        
        return true;
    }
};