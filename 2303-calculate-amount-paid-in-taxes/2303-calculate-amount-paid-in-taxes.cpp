class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        double result = 0;
        int n = brackets.size();
        
        for(int i = 0; i<n; i++){
            if(i == 0){
                if(brackets[i][0] <= income){
                    result += brackets[i][0]*brackets[i][1];
                    income -= brackets[i][0];
                }
                else{
                    result += income*brackets[i][1];
                    break;
                }
            }
            else{
                int store = brackets[i][0] - brackets[i-1][0];
                if(store <= income){
                    result += store*brackets[i][1];
                    income -= store;
                }
                else{
                    result += income*brackets[i][1];
                    break;
                }
            }
        }
        
        return result/100;
    }
};