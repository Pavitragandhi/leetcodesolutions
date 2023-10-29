class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string acro;
        int i = 0;
        
        for(string letter : words){
            if(letter[0] != s[i]){
                return false;
            }
            acro += letter[0];
            i++;
        }
        
        if(acro.size() != s.size()){
            return false;
        }
        
        return true;
    }
};