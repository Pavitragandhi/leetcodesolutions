class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        int sum = 0;
        int m = n;
        if(n == 1){
            return cost[0];
        }
        
        sort(cost.begin() , cost.end() , [](int a , int b){
            return a>b;
        });
        
        for(int i = 0; i<n; i+=3){
            if(m>=2){
                sum += cost[i] + cost[i+1];
            }
            else{
                sum += cost[i];
            }
            m-=3;
        }
        return sum;
    }
};