class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int n = releaseTimes.size();
        int max_duration = releaseTimes[0];
        char result = keysPressed[0];
        
        for(int i = 1; i<n; i++){
            int duration = releaseTimes[i] - releaseTimes[i-1];
            
            if(duration > max_duration || (duration == max_duration && keysPressed[i] > result)){
                result = keysPressed[i];
                max_duration = duration;
            }
        }
        
        return result;
    }
};