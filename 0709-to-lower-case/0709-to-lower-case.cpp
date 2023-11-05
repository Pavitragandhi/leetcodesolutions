class Solution {
public:
    string toLowerCase(string s) {
        string lowercase = "";
        for(char i : s){
            i = tolower(i);
            lowercase += i;
        }
        return lowercase;
    }
};