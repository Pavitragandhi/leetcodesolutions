class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long result = 0;
        
        while(k>0){
            int index = distance(gifts.begin() , max_element(gifts.begin() , gifts.end()));
            gifts[index] = sqrt(gifts[index]);
            k--;
        }
        for(int num : gifts){
            result += num;
        }
        return result;
    }
};