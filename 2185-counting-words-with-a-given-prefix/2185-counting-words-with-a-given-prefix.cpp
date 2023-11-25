class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        int n = words.size();
        
        for(int i = 0; i<n; i++){
            string store = "";
            for(int j = 0; j<pref.size(); j++){
                if(words[i][j] == pref[j]){
                    store += pref[j];
                }
                else{
                    break;
                }
            }
            if(store == pref){
                count++;
            }
        }
        return count;
    }
};