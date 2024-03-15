class Solution {
public:
    string reformat(string s) {
        string digits = "";
        string alpha = "";
        int digit_count = 0;
        int alpha_count = 0;
        
        for(char c : s){
            if(isalpha(c)){
                alpha_count++;
                alpha += c;
            }
            else if(isdigit(c)){
                digit_count++;
                digits += c;
            }
        }
        
        if(alpha_count != digit_count && abs(alpha_count - digit_count) != 1){
            return "";
        }
        
        string result = "";
        int i = 0;
        int j = 0;
        while(i < digits.size() && j < alpha.size()){
            if(digits.size() > alpha.size()){
                result += digits[i];
                result += alpha[j];
            }
            else{
                result += alpha[j];
                result += digits[i];
            }
            i++;
            j++;
        }
        
        while(i < digits.size()){
            result += digits[i];
            i++;
        }
        
        while(j < alpha.size()){
            result += alpha[j];
            j++;
        }
        return result;
    }
};