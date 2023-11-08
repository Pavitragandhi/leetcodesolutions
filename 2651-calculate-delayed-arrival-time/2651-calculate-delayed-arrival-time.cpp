class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int original_arrival = arrivalTime + delayedTime;
        
        if(original_arrival >= 24){
            return original_arrival - 24;
        }
        return original_arrival;
    }
};