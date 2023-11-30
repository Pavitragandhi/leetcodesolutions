class Solution {
public:
    int countTriples(int n) {
        int count = 0;
        
        for(int i = 1; i<n-1; i++){
            int a = i*i;
            for(int j = i+1; j<n; j++){
                int b = j*j;
                for(int k = j+1; k<n+1; k++){
                    int c = k*k;
                    if(c == a + b){
                        count += 2;
                    }
                }
            } 
        }
        
        return count;
    }
};