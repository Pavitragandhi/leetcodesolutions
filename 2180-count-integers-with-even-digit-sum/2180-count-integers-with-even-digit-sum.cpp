class Solution {
public:
    int countEven(int num) {
        int count = 0;
        
        for(int i = 2; i<=num; i++){
            int store = i;
            int sum = 0;
            while(store>0){
                int remainder = store%10;
                sum += remainder;
                store /= 10;
            }
            if(sum%2 == 0){
                count++;
            }
        }
        
        return count;
    }
};