class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        bool check = false;
        
        for(char i : s){
            if( i == '|'){
                check = !check;
            }
            else if(check == false && i == '*'){
                count++;
            }
        }
        return count;
    }
};