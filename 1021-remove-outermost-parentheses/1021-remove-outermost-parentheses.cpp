class Solution {
public:
    string removeOuterParentheses(string s) {
        int balance = 0;
        vector<string> stores;
        string split = "";
        
        for(char i : s){
            if(i == '('){
                balance++;
                split += "(";
            }
            else{
                balance--;
                split += ")";
            }
            
            if(balance == 0){
                stores.push_back(split);
                split = "";
            }
        }
        
        string result = "";
        
        for(string i : stores){
            i = i.substr(1 , i.length() - 2);
            result += i;
        }
        return result;
    }
};