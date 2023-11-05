class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> alphabets;
        
        for(char i : sentence){
            alphabets.insert(i);
        }
        
        if(alphabets.size() != 26){
            return false;
        }
        
        return true;
    }
};