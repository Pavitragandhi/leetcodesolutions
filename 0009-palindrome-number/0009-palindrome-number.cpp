class Solution {
public:
    bool isPalindrome(int x) {
        string num = to_string(x);
        reverse(num.begin() , num.end());
        string nums = to_string(x);
        if(num == nums){
            return true;
        }
        
        return false;
    }
};