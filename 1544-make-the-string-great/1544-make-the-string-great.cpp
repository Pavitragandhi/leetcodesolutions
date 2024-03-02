class Solution {
public:
    string makeGood(string s) {
        string result = "";
        stack<char> store;
        
        for(char c : s){
            if(store.empty()){
                store.push(c);
                continue;
            }
            
            char check = store.top();
            if((c == toupper(check) || c == tolower(check)) && c != check){
                store.pop();
            }
            else{
                store.push(c);
            }
        }
        
        if(store.empty()){
            return result;
        }
        
        while(!store.empty()){
            result += store.top();
            store.pop();
        }
        reverse(result.begin() , result.end());
        return result;
    }
};