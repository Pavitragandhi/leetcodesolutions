class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> result(num_people);
        int count = 1;
        
        while(candies > 0){
            for(int i = 0; i<num_people; i++){
                if(candies > count){
                    result[i] += count;
                }
                else{
                    result[i] += candies;
                    candies -= candies;
                    break;
                }
                candies -= count;   
                count++;
            }
        }
        
        return result;
    }
};