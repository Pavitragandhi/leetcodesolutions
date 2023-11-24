class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(string s : words){
            string r = s;
            reverse(r.begin() , r.end());
            
            if(s == r){
                return s;
            }
        }
        
        return "";
    }
};