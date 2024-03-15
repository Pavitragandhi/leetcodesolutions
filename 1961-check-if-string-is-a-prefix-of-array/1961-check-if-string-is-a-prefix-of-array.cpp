class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string check = "";
        int p = s.size();
        
        for(string str : words){
            int n = check.size();
            int m = str.size();
            
            check += str;
            if(n+m > p){
                return false;
            }
            
            if(check == s){
                return true;
            }
        }
        
        return false;
    }
};