class Solution {
public:
    string makeFancyString(string s) {
        stack<char> store;
        int count = 1;
        string result = "";
        
        for(char c : s){
            if(store.empty()){
                store.push(c);
                result += c;
            }
            else{
                char check = store.top();
                if(check != c){
                    count = 1;
                    store.push(c);
                    result += c;
                }
                else{
                    count++;
                    if(count > 2){
                        continue;
                    }
                    store.push(c);
                    result += c;
                }
            }
        }
        return result;
    }
};