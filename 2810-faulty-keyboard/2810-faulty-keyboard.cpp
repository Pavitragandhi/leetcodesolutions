class Solution {
public:
    string finalString(string s) {
        string result;
        
        for(char i : s){
            if( i == 'i'){
                reverse(result.begin() , result.end());
            }
            else{
                result += i;
            }
        }
        return result;
    }
};