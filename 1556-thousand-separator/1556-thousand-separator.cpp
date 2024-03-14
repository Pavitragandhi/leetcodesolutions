class Solution {
public:
    string thousandSeparator(int n) {
        string str = to_string(n);
        int m = str.size();
        string result = "";
        int count = 0;
        
        for(int i = m-1; i>=0; i--){
            if(i == 0){
                result += str[i];
                break;
            }
            count++;
            result += str[i];
            if(count == 3){
                result += '.';
                count = 0;
            }
        }
        
        reverse(result.begin() , result.end());
        return result;
    }
};