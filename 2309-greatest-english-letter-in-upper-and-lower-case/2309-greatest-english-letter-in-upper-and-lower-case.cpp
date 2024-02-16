class Solution {
public:
    string greatestLetter(string s) {
        int check = INT_MIN;
        string result = "";
        
        for(char c : s){
            if(islower(c)){
                continue;
            }
            else{
                if(s.find(tolower(c)) != string::npos){
                    int value = c - 'A';
                    if(value > check){
                        check = value;
                        result = c;
                    }
                }
            }
        }
        return result;
    }
};