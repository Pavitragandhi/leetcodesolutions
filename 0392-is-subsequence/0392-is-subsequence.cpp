class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_count = 0;
        int t_count = 0;
        
        while(s_count<s.size() && t_count<t.size()){
            if(s[s_count] == t[t_count]){
                s_count++;
            }
            t_count++;
        }
        return (s_count == s.size());
    }
};