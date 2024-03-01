class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> result;
        istringstream s(text);
        string read;
        vector<string> store;
        
        while(s >> read){
            store.push_back(read);
        }
        
        int n = store.size();
        
        for(int i = 0; i<n-2; i++){
            if(store[i] == first && store[i+1] == second){
                result.push_back(store[i+2]);
            }
        }
        
        return result;
    }
};