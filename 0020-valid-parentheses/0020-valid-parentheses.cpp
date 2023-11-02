class Solution {
public:
    bool isValid(string s) {
        stack<char> mystack;
        
        for(char i : s){
            if(i == '(' || i == '{' || i == '['){
                mystack.push(i);
            }
            else{
                if(mystack.empty()){
                    return false;
                }
                
                char stackTop = mystack.top();
                mystack.pop();
                
                if(i == ')' && stackTop != '(' ||
                  i == '}' && stackTop != '{' ||
                  i == ']' && stackTop != '['){
                    return false;
                }
            }
        }
        return mystack.empty();
    }
};