class Solution {
public:
    bool divisorGame(int n) {
        bool alice = false;
        if(n == 1){
            return alice;
        }
        
        while(n != 1){
            n -= 1;
            alice = !alice;
        }
        
        return alice;
    }
};