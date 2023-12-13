class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n = prices.size();
        int sum;
        vector<int> store;
        
        for(int i = 0; i<n-1; i++){
            for(int j = i+1; j<n; j++){
                if(prices[i] + prices[j] <= money){
                    sum = prices[i] + prices[j];
                    store.push_back(sum);
                }
            }
        }
        if(store.empty()){
            return money;
        }
        sort(store.begin() , store.end());
        int result = money - store[0];
        return result;
    }
};