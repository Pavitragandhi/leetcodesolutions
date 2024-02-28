class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        int count_1 = 0;
        int count_2 = 0;
        string zero_start = "";
        string one_start = "";
        
        for(int i = 0; i<n; i++){
            if(i%2 == 0){
                zero_start += '0';
            }
            else{
                zero_start += '1';
            }
        }
        
        for(int i = 0; i<n; i++){
            if(i%2 == 0){
                one_start += '1';
            }
            else{
                one_start += '0';
            }
        }
        
        for(int i = 0; i<n; i++){
            if(s[i] != zero_start[i]){
                count_1++;
            }
            
            if(s[i] != one_start[i]){
                count_2++;
            }
        }
        int result = min(count_1 , count_2);
        return result;
    }
};