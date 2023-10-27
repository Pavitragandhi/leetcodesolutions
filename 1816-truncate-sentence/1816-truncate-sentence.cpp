class Solution {
public:
    string truncateSentence(string s, int k) {
        istringstream split(s);
        vector<string> words;
        string read;
        string truncate;
        
        while(split >> read){
            words.push_back(read);
        }
        
        for(int i = 0; i<k; i++){
            truncate += words[i];
            if(i < k-1){
                truncate += ' ';
            }
        }
        
        return truncate;
    }
};