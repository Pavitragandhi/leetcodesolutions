class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        unordered_set<string> result;
        int n = words.size();
        
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(i == j){
                    continue;
                }
                else{
                    if(words[j].find(words[i]) != string::npos){
                        result.insert(words[i]);
                    }
                }
            }
        }
        
        vector<string> answer(result.begin() , result.end());
        return answer;
    }
};