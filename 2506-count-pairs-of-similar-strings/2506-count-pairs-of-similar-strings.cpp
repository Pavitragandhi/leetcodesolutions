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
        bitset<256> charSet1;
        bitset<256> charSet2;

        for(char c : word1){
            charSet1.set(static_cast<unsigned char>(c));
        }

        for(char c : word2){
            charSet2.set(static_cast<unsigned char>(c));
        }
        return charSet1 == charSet2;
    }
};