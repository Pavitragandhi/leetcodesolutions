class Solution {
public:
    bool isCircularSentence(string sentence) {
        istringstream s(sentence);
        string read;
        vector<string> store;
        
        while(s >> read){
            store.push_back(read);
        }
        
        int n = store.size();
        int m = store[n-1].size();
        char first = store[0][0];
        char last = store[n-1][m-1];
        
        if(first != last){
            return false;
        }
        
        char check_last;
        char check_first;
        
        for(int i = 0; i<n-1; i++){
            int p = store[i].size();
            check_last = store[i][p-1];
            check_first = store[i+1][0];
            
            if(check_last != check_first){
                return false;
            }
        }
        
        return true;
    }
};