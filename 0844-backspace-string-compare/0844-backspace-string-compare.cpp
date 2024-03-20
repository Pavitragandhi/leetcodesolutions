class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s_check = "";
        string t_check = "";
        
        for(int i = 0; i<s.size(); i++){
            if(isalpha(s[i])){
                s_check += s[i];
            }
            else{
                int n = s_check.size();
                if(!s_check.empty()){
                    s_check.erase(n-1 , 1);
                }
            }
        }
        
        for(int i = 0; i<t.size(); i++){
            if(isalpha(t[i])){
                t_check += t[i];
            }
            else{
                int n = t_check.size();
                if(!t_check.empty()){
                    t_check.erase(n-1 , 1);
                }
            }
        }
        
        if(s_check == t_check){
            return true;
        }
        return false;
    }
};