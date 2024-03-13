class Solution {
public:
    int minimumMoves(string s) {
        int result = 0;
        int x_count = 0;
        int count = 0;
        
        for(char c : s){
            count++;
            if(c == 'O' && count == 1){
                count = 0;
                continue;
            }
            if(c == 'X'){
                x_count++;
            }
            
            if(count == 3 && x_count != 0){
                result++;
                count = 0;
                x_count = 0;
            }
        }
        
        if(x_count != 0){
            result++;
        }
        return result;
    }
};