class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int number = num;
        
        while(num != 0){
            int remainder = num % 10;
            if(number % remainder == 0){
                count++;
            }
            
            num /= 10;
        }
        return count;
    }
};