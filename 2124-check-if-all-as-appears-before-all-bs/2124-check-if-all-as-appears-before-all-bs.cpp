class Solution {
public:
    bool checkString(string s) {
        bool b_check = false;
        
        for(char c : s){
            if(c == 'b' && b_check == false){
                b_check = true;
            }
            
            if(b_check && c == 'a'){
                return false;
            }
        }
        return true;
    }
};