class Solution {
public:
    string removeTrailingZeros(string num) {
        int n = num.size();
        string result = "";
        
        for(int i = n-1; i>=0; i--){
            if(num[i] == '0' && result.empty()){
                continue;
            }
            else{
                result += num[i];
            }
        }
        
        reverse(result.begin() , result.end());
        return result;
    }
};