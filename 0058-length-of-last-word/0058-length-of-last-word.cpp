class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> store;
        istringstream str(s);
        string read;
        
        while(str >> read){
            store.push_back(read);
        }
        
        int n = store.size();
        int result = store[n-1].size();
        return result;
    }
};