class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        if(password.size() < 8){
            return false;
        }
        
        int n = password.size();
        bool lower_case = false;
        bool upper_case = false;
        bool digit = false;
        bool special = false;
        
        for(int i = 0; i<n; i++){
            if(password[i] == password[i+1] && i != n-1){
                return false;
            }
            
            if(isdigit(password[i])){
                digit = true;
            }
            else if(islower(password[i])){
                lower_case = true;
            }
            else if(isupper(password[i])){
                upper_case = true;
            }
            else{
                special = true;
            }
        }
        
        return (lower_case && upper_case && digit && special);
    }
};