class Solution {
public:
    int similarPairs(vector<string>& words) {
        int count = 0;
        int n = words.size();
        
        for(int i = 0; i<n-1; i++){
            for(int j = i+1; j<n; j++){
                if(check_pairs_similarity(words[i] , words[j])){
                    count++;
                }
            }
        }
        return count;
    }
    
private:
    bool check_pairs_similarity(string word1 , string word2){
        unordered_set<char> set1(word1.begin() , word1.end());
        unordered_set<char> set2(word2.begin() , word2.end());
        
        return set1 == set2;
    }
};