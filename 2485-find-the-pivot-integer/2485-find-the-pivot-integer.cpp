class Solution {
public:
    int pivotInteger(int n) {
        int pivot;
        
        for(int i = 1; i<=n; i++){
            pivot = i;
            int sum1 = 0;
            int sum2 = 0;
            for(int j = 1; j<=n; j++){
                if(pivot <= j){
                    sum1 += j;
                }
                if(pivot >= j){
                    sum2 += j;
                }
            }
            if(sum1 == sum2){
                return pivot;
            }
        }
        return -1;
    }
};