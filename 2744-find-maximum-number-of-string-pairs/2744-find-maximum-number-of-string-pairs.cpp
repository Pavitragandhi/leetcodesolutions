class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        int count = 0;
        
        for(int i = 0; i<n-1; i++){
            reverse(words[i].begin() , words[i].end());
            for(int j = i+1; j<n; j++){
                if(words[i] == words[j]){
                    count++;
                }
            }
        }
        return count;
    }
};