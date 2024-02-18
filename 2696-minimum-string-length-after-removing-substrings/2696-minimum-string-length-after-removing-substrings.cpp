class Solution {
public:
    int minLength(string s) {
        stack<char> store;
        
        for(char c : s){
            if(store.empty()){
                store.push(c);
                continue;
            }
            
            char top = store.top();
            if((top == 'A' && c == 'B') || (top == 'C' && c == 'D')){
                store.pop();
            }
            else{
                store.push(c);
            }
        }
        return store.size();
    }
};