class Solution {
public:
    string reverseOnlyLetters(string s) {
        string store = "";
        int n = s.size();
        
        for(char c : s){
            if(isalpha(c)){
                store += c;
            }
        }
        
        reverse(store.begin() , store.end());
        string result = "";
        int count = 0;
        
        for(int i = 0; i<n; i++){
            if(isalpha(s[i])){
                result += store[count];
                count++;
            }
            else{
                result += s[i];
            }
        }
        return result;
    }
};