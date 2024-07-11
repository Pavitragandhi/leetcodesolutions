class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int store_1 = target - 'a';
        
        for(char c : letters){
            int store_2 = c - 'a';
            
            if(store_2 > store_1){
                return c;
            }
        }
        
        return letters[0];
    }
};