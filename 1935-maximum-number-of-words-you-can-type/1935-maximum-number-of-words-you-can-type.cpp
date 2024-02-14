class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        istringstream s(text);
        string read;
        vector<string> store;
        int count = 0;
        
        while(s >> read){
            store.push_back(read);
        }
        
        int n = store.size();
        
        for(int i = 0; i<n; i++){
            bool check = true;
            for(char c : brokenLetters){
                if(store[i].find(c) != string::npos){
                    check = false;
                    break;
                }
            }
            
            if(check){
                count++;
            }
        }
        return count;
    }
};