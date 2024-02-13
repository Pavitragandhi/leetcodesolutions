class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones_count = 0;
        string result = "";
        int n = s.size();
        
        for(char c : s){
            if(c == '1'){
                ones_count++;
            }
        }
        
        for(int i = 0; i<n; i++){
            if(ones_count > 1){
                result += '1';
                ones_count--;
            }
            else{
                result += '0';
            }
        }
        
        result[n-1] = '1';
        
        return result;
    }
};