class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        vector<int> result;
        int count;
        
        for(int i = 0; i<n; i++){
            for(char c : sentences[i]){
                if( c == ' '){
                    count++;
                }
            }
            
            result.push_back(count + 1);
            count = 0;
        }
        
        return *max_element(result.begin() , result.end());
    }
};