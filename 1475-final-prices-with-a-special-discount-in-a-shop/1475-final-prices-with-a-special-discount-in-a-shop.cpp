class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> answer;
        int n = prices.size();
        
        for(int i = 0; i<n; i++){
            bool check = false;
            for(int j = i+1; j<n; j++){
                if(prices[i] >= prices[j]){
                    check = true;
                    int discount = prices[i] - prices[j];
                    answer.push_back(discount);
                    break;
                }
            }
            if(!check){
                answer.push_back(prices[i]);
            }
        }
        return answer;
    }
};