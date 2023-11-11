class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int result = 0;
        
        for(int i = low; i<=high; i++){
            string num = to_string(i);
            
            if(num.size()%2 != 0){
                continue;
            }
            
            int imp_size = num.size()/2;
            int sum1 = 0;
            int sum2 = 0;
            
            for(int j = 0; j<imp_size; j++){
                sum1 += num[j] - '0';
                sum2 += num[imp_size + j] - '0';
            }
            if(sum1 == sum2){
                result++;
            }
        }
        
        return result;
    }
};