class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num == 0){
            return true;
        }
        
        string reverse1 = to_string(num);
        reverse(reverse1.begin() , reverse1.end());
        
        if(reverse1[0] == '0'){
            return false;
        }
        return true;
    }
};