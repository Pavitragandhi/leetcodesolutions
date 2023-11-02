class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(strs.empty()){
            return "";
        }
        
        string result = strs[0];
        
        for(int i = 1; i<n; i++){
            int j = 0;
            
            while(j<result.size() && j<strs[i].size() && result[j]==strs[i][j]){
                j++;
            }
            
            result = result.substr(0 , j);
            
            if(result.empty()){
                return "";
            }
        }
        
        return result;
    }
};