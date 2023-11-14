class Solution {
public:
    int tribonacci(int n) {
        vector<int> tribonacci_sequence(n+1);
        
        if(n == 0){
            return 0;
        }
        else if(n == 1 || n == 2){
            return 1;
        }
        
        tribonacci_sequence[0] = 0;
        tribonacci_sequence[1] = 1;
        tribonacci_sequence[2] = 1;
        
        for(int i = 2; i<n; i++){
            tribonacci_sequence[i+1] = tribonacci_sequence[i] + tribonacci_sequence[i-1] +
                tribonacci_sequence[i-2];
        }
        
        return *max_element(tribonacci_sequence.begin() , tribonacci_sequence.end());
    }
};