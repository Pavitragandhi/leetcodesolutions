class Solution {
public:
    bool detectCapitalUse(string word) {
        bool first_cap = true;
        bool all_small = true;
        bool all_cap = true;
        
        for(char c : word){
            if(!isupper(c)){
                all_cap = false;
                break;
            }
        }
        
        for(char c : word){
            if(!islower(c)){
                all_small = false;
                break;
            }
        }
        
        for(int i = 0; i<word.size(); i++){
            if(!isupper(word[0])){
                first_cap = false;
                break;
            }
            else if(!islower(word[i]) && i != 0){
                first_cap = false;
                break;
            }
        }
        
        return (first_cap || all_small || all_cap);
    }
};