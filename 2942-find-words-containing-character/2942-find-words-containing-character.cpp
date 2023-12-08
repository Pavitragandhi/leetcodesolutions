class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> result;
        int count = 0;
        
        for(string word : words){
            if(word.find(x) != string::npos){
                result.push_back(count);
            }
            count++;
        }
        return result;
    }
};