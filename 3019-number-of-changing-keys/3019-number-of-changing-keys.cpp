class Solution {
public:
    int countKeyChanges(string s) {
        stack<char> store;
        int count = 0;
        
        for(char c : s){
            if(store.empty()){
                store.push(tolower(c));
                continue;
            }
            else{
                char check = tolower(c);
                char top = store.top();
                if(top != check){
                    count++;
                }
                store.push(check);
            }
        }
        return count;
    }
};