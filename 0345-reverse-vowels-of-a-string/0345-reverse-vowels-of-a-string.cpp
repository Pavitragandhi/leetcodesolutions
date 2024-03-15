class Solution {
public:
    string reverseVowels(string s) {
        string store = "";
        string str = "aeiouAEIOU";
        
        for(char c : s){
            if(str.find(c) != string::npos){
                store += c;
            }
        }
        
        reverse(store.begin() , store.end());
        string result = "";
        int index = 0;
        
        for(char c : s){
            if(store.find(c) != string::npos){
                result += store[index];
                index++;
            }
            else{
                result += c;
            }
        }
        return result;
    }
};