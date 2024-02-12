class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        string first = "";
        string second = "";
        string target = "";
        
        for(char c : firstWord){
            int check = c - 'a';
            first += check + '0';
        }
        
        for(char c : secondWord){
            int check = c - 'a';
            second += check + '0';
        }
        
        for(char c : targetWord){
            int check = c - 'a';
            target += check + '0';
        }
        
        int sum = stoi(first) + stoi(second);
        int sum_2 = stoi(target);
        return sum == sum_2;
    }
};