class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        
        for(int i = 1; i<=n/2; i++){
            if(n%i == 0){
                bool check = true;
                string sub_s = s.substr(0 , i);
                
                for(int j = i; j<n; j+=i){
                    if(s.substr(j , i) != sub_s){
                        check = false;
                        break;
                    }
                }
                
                if(check){
                    return true;
                }
            }
        }
        return false;
    }
};