class Solution {
public:
    int countOperations(int num1, int num2) {
        int no_of_operation = 0;
        
        while(num1 != 0 && num2 != 0){
            if(num1>num2){
                num1 -= num2;
            }
            else{
                num2 -= num1;
            }
            no_of_operation++;
        }
        return no_of_operation;
    }
};