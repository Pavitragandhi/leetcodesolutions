class Solution {
public:
    bool checkRecord(string s) {
        int late_count = 0;
        int absent_count = 0;
        
        for(char c : s){
            if(c == 'A'){
                absent_count++;
                if(absent_count >= 2){
                    return false;
                }
                late_count = 0;
            }
            else if(c == 'L'){
                late_count++;
                if(late_count >= 3){
                    return false;
                }
            }
            else{
                late_count = 0;
            }
        }
        return true;
    }
};