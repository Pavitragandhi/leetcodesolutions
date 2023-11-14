class Solution {
public:
    int fib(int n) {
        vector<int> fibonaaci_number(n+1);
        if(n == 0){
            return 0;
        }
        
        fibonaaci_number[0] = 0;
        fibonaaci_number[1] = 1;
        
        for(int i = 1; i<n; i++){
            fibonaaci_number[i+1] = fibonaaci_number[i] + fibonaaci_number[i-1];
        }
        
        return *max_element(fibonaaci_number.begin() , fibonaaci_number.end());
    }
};