class Solution {
public:
    string replaceDigits(string s) {
        int n = s.size();
        for(int i = 1; i<n; i+=2){
            s[i] = shift(s[i-1] , s[i]);
        }
        
        return s;
    }
    
private:
    char shift(char c , char x){
        int i = x - '0';
        c += i;
        return c;
    }
};