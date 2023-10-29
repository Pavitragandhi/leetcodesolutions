class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string acro;
        
        for(string letter : words){
            acro += letter[0];
        }
        if(acro != s){
            return false;
        }
        return true;
    }
};