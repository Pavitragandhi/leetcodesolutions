class Solution {
public:
    int percentageLetter(string s, char letter) {
        int n = s.size();
        unordered_map<char , int> store;
        
        for(char c : s){
            store[c]++;
        }
        
        if(store[letter] == 0){
            return 0;
        }
        else{
            return (store[letter]*100)/n;
        }
    }
};