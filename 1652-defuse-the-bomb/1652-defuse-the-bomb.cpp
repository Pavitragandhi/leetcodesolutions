class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int  n = code.size();
        vector<int> result(n , 0);
        
        for(int i = 0; i<n; i++){
            if(k == 0){
                return result;
            }
            else if(k > 0){
                for(int j = 1; j<=k; j++){
                    if(i+j < n){
                        result[i] += code[i+j];
                    }
                    else if(i+j >= n){
                        result[i] += code[i+j-n];
                    }
                }
            }
            else if(k < 0){
                for(int j = 1; j<=abs(k); j++){
                    if(i-j >= 0){
                        result[i] += code[i-j];
                    }
                    else if(i-j < 0){
                        result[i] += code[i-j+n];
                    }
                }
            }
        }
        return result;
    }
};