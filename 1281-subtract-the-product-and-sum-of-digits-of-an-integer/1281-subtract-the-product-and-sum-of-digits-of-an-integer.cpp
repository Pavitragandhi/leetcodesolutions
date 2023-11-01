class Solution {
public:
    int subtractProductAndSum(int n) {
        int productOfDigits = 1;
        int sumOfDigits = 0;
        
        while(n > 0){
            int remainder = n % 10;
            productOfDigits *= remainder;
            sumOfDigits += remainder;
            n /= 10;
        }
        
        return productOfDigits - sumOfDigits;
    }
};