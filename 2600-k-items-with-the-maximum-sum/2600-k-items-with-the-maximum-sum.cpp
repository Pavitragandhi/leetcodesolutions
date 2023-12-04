class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int sum = 0;
        
        for(int i = 0; i<k; i++){
            if(numOnes != 0){
                sum += 1;
                numOnes -= 1;
            }
            else if(numZeros != 0){
                numZeros -= 1;
            }
            else{
                sum -= 1;
                numNegOnes -= 1;
            }
        }
        return sum;
    }
};