class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        int n = word1.size();
        unordered_map<char , int> store_1;
        unordered_map<char , int> store_2;
        int check = 0;
        
        for(int i = 0; i<n; i++){
            store_1[word1[i]]++;
            store_2[word2[i]]++;
        }
        
        for(auto pair : store_1){
            check = abs(pair.second - store_2[pair.first]);
            if(check > 3){
                return false;
            }
        }
        
        for(auto pair : store_2){
            check = abs(pair.second - store_1[pair.first]);
            if(check > 3){
                return false;
            }
        }
        
        return true;
    }
};