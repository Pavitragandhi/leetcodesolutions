class Solution {
public:
    int balancedStringSplit(string s) {
        int l_count = 0;
        int r_count = 0;
        int n = s.length();
        int result = 0;
        
        for(int i = 0; i<n; i++){
            if(s[i] == 'L'){
                l_count++;
            }
            else if(s[i] == 'R'){
                r_count++;
            }
            
            if(l_count == r_count){
                result++;
            }
        }
        return result;
    }
};