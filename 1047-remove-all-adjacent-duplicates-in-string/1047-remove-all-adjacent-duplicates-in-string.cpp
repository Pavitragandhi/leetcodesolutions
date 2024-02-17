class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> store;
        string result = "";
        
        for(char c : s){
            if(store.empty()){
                store.push(c);
                continue;
            }
            
            char top = store.top();
            if(top == c){
                store.pop();
            }
            else{
                store.push(c);
            }
        }
        
        while(!store.empty()){
            char top = store.top();
            result += top;
            store.pop();
        }
        
        reverse(result.begin() , result.end());
        
        return result;
    }
};