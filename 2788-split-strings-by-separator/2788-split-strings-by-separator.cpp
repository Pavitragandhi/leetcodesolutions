class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> result;
        
        for(string word : words){
            int n = word.size();
            string s = "";
            for(int i = 0; i<n; i++){
                if(word[i] != separator){
                    s += word[i];
                }
                else{
                    if(!s.empty()){
                        result.push_back(s);
                        s = "";
                    }
                }
            }
            if(!s.empty()){
                result.push_back(s);
            }
        }
        return result;
    }
};