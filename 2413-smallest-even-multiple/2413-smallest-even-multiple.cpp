class Solution {
public:
    int smallestEvenMultiple(int n) {
        int smallest_multiple;
        
        for(int i = 1; i<3; i++){
            if(n*i % 2 == 0){
                smallest_multiple = n*i;
                break;
            }
        }
        return smallest_multiple;
    }
};