class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.size();
        long long int result = 0;
        int count = 0;
        unordered_map<char , int> store = {
            {'A' , 1},{'B' , 2},{'C' , 3},{'D' , 4},{'E' , 5},{'F' , 6},{'G' , 7},{'H' , 8},
            {'I' , 9},{'J' , 10},{'K' , 11},{'L' , 12},{'M' , 13},{'N' , 14},{'O' , 15},{'P' , 16},
            {'Q' , 17},{'R' , 18},{'S' , 19},{'T' , 20},{'U' , 21},{'V' , 22},{'W' , 23},{'X' , 24},
            {'Y' , 25},{'Z' , 26}
        };
        
        for(int i = n-1; i>=0; i--){
            result += pow(26 , count)*store[columnTitle[i]];
            count++;
            
        }
        return result;
    }
};