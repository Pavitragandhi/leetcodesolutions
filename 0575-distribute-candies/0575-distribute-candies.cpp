class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size()/2;
        unordered_set<int> store(candyType.begin() , candyType.end());
        int m = store.size();
        
        if(n >= m){
            return m;
        }
        return n;
    }
};