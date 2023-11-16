class Solution {
public:
    int climbStairs(int n) {
        vector<int> result(n+1 , 0);
        if(n<=2){
            return n;
        }
        result[1] = 1;
        result[2] = 2;
        
        for(int i = 3; i<=n; i++){
            result[i] = result[i-1] + result[i-2];
        }
        return result[n];
    }
};