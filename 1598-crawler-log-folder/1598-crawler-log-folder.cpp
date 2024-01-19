class Solution {
public:
    int minOperations(vector<string>& logs) {
        int result = 0;
        
        for(string s : logs){
            if(s == "./"){
                continue;
            }
            else if(s == "../"){
                if(result == 0){
                    continue;
                }
                else{
                    result--;
                }
            }
            else{
                result++;
            }
        }
        
        return result;
    }
};