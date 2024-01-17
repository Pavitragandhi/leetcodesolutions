class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long result = 0;
        int n = gifts.size();
        
        while(k>0){
            sort(gifts.begin() , gifts.end());
            int store = sqrt(gifts[n-1]);
            gifts[n-1] = store;
            k--;
        }
        
        for(int num : gifts){
            result += num;
        }
        return result;
    }
};