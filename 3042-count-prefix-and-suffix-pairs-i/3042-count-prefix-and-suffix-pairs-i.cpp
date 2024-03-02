class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;
        int n = words.size();
        
        for(int i = 0; i<n-1; i++){
            for(int j = i+1; j<n; j++){
                if(isPrefAndSuffix(words[i] , words[j])){
                    count++;
                }
            }
        }
        return count;
    }
    
private:
    bool isPrefAndSuffix(const string str1 , const string str2){
        int p = str1.size();
        int m = str2.size();
        if(p > m){
            return false;
        }
        
        for(int i = 0; i<p; i++){
           if(str1[i] != str2[i]){
               return false;
           }
        }
    
        for(int i = 0; i<p; i++){
           if(str1[i] != str2[m - p + i]){
               return false;
           }
        }
        return true;
    }
};