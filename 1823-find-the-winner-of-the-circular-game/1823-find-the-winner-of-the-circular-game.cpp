class Solution {
public:
    int Winner(int n , int k){
        if(n == 1){
            return 0;
        }
        return (Winner(n-1 , k) + k) % n;
    }
    
    int findTheWinner(int n, int k) {
        int result = Winner(n,k);
        return result + 1;
    }
};