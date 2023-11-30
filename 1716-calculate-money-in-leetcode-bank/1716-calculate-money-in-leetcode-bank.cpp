class Solution {
public:
    int totalMoney(int n) {
        
        int count = 0;
        int add = 0;
        int sum = 0;
        
        for(int i = 1; i<=n; i++){
            add++;
            sum += add;
            if(i%7 == 0){
                count++;
                add = count;
            }
        }
        return sum;
    }
};