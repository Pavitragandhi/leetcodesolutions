class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int n = s.size();
        vector<vector<int>> result;
        int count = 0;
        int start = 0;
        int end = 0;
        
        for(int i = 0; i<n-1; i++){
            if(s[i] == s[i+1]){
                count++;
            }
            else{
                if(count > 1){
                    end = start + count;
                    result.push_back({start , end});
                }
                start = i+1;
                count = 0;
            }
        }
        
        if(count > 1){
            end = start + count;
            result.push_back({start , end});
        }
        
        return result;
    }
};