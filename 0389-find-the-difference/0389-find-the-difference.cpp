class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = t.size();
        sort(s.begin() , s.end());
        sort(t.begin() , t.end());
        char result;
        
        for(int i = 0; i<n; i++){
            if(i == n-1){
                return t[n-1];
            }
            if(s[i] != t[i]){
                result = t[i];
                break;
            }
        }
        return result;
    }
};