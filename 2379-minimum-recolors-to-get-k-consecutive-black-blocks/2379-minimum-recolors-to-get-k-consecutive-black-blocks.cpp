class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int result = INT_MAX;
        int n = blocks.size();
        
        for(int i = 0; i<n; i++){
            int operation = 0;
            int black = 0;
            string check = blocks;
            for(int j = i; j<n; j++){
                if(check[j] == 'W'){
                    operation++;
                }
                else if(check[j] == 'B'){
                    black++;
                }
                
                if((operation + black) == k){
                    result = min(result , operation);
                }
            }
        }
        
        return result;
    }
};