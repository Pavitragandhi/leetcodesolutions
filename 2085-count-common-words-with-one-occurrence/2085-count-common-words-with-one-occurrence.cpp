class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int count = 0;
        unordered_map<string , int> compare1;
        unordered_map<string , int> compare2;
        
        for(string word : words1){
            compare1[word]++;
        }
        
        for(string word : words2){
            compare2[word]++;
        }
        
        for(string word : words2){
            if(compare1.find(word) != compare1.end() && compare1[word] == 1 && compare2[word] == 1){
                count++;
            }
        }
        return count;
    }
};