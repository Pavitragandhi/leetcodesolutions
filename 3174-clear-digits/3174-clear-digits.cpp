class Solution {
public:
    string clearDigits(string s) {
        stack<char> store;
        
        for(char c : s){
            if(isalpha(c)){
                store.push(c);
            }
            else{
                store.pop();
            }
        }
        
        string result = "";
        
        while(!store.empty()){
            char add = store.top();
            store.pop();
            
            result = add + result;
        }
        return result;
    }
};