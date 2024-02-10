class Solution {
public:
    int minTimeToType(string word) {
        int result = 0;
        char pointer = 'a';
        
        for(char c : word){
            int clock = abs(c - pointer);
            int anticlock = 26 - abs(c - pointer);
            
            result += min(clock , anticlock) + 1;
            pointer = c;
        }
        return result;
    }
};