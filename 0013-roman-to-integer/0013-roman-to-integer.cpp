class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        int number = 0;
        unordered_map<char , int> roman_to_integer{
            {'I' , 1} , {'V' , 5} , {'X' , 10} , {'L' , 50} , {'C' , 100} ,
            {'D' , 500} , {'M' , 1000}
        };
        
        for(int i = 0; i<n; i++){
            if(roman_to_integer[s[i]] < roman_to_integer[s[i+1]]){
                number -= roman_to_integer[s[i]];
            }
            else{
                number += roman_to_integer[s[i]];
            }
        }
        return number;
    }
};