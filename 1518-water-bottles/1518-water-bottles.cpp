class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int drank_bottles = numBottles;
        
        while(numBottles >= numExchange){
            int remainder = numBottles % numExchange;
            drank_bottles += numBottles/numExchange;
            numBottles = remainder + (numBottles/numExchange);
        }
        return drank_bottles;
    }
};