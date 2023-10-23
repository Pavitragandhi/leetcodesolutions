class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> result;
        int greatest_no_of_candies;
        bool output;
        
        for(int i = 0; i<n; i++){
            greatest_no_of_candies = candies[i] + extraCandies;
            
                if(greatest_no_of_candies >= *max_element(candies.begin(), candies.end())){
                    output = true;
                }
                else{
                    output = false;
                }
            
            result.push_back(output);
        }
        
        return result;
    }
};