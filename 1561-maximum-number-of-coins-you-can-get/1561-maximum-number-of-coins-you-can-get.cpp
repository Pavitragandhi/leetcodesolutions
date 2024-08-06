class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size();
        sort(piles.begin() , piles.end() , [](int& a , int&b){
            return a > b;
        });
        
        int result = 0;
        
        for(int i = 0; i<(n/3); i++){
            result += piles[i*2 + 1];
        }
        return result;
    }
};