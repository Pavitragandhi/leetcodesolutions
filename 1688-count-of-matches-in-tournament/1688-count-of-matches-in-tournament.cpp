class Solution {
public:
    int numberOfMatches(int n) {
        int match_count = 0;
        int match_played;
        
        while(n>1){
            if(n%2 == 0){
                match_played = n/2;
                match_count += match_played;
                n = n/2;
            }
            else{
                match_played = (n - 1)/2;
                match_count += match_played;
                n = ((n-1)/2) + 1;
            }
        }
        return match_count;
    }
};