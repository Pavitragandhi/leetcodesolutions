class Solution {
public:
    int alternateDigitSum(int n) {
        string s = to_string(n);
        int i = s.length();
        
        bool check = true;
        
        if(i%2 == 0){
            check = false;
        }

        int result = 0;
        
        while(n>0){
            int remainder = n%10;
            if(check == true){
                result += remainder;
                check = !check;
            }
            else{
                result -= remainder;
                check = !check;
            }
            n /= 10;
        }
        return result;
    }
};