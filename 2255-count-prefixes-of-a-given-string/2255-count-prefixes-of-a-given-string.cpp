class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count = 0;
        
        for(string word : words){
            int n = word.size();
            int i = 0;
            while(i<n){
                if(s[i] != word[i]){
                    break;
                }
                i++;
            }
            if(i == n){
                count++;
            }
        }
        return count;
    }
};