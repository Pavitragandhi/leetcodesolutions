class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int num = stoi(coordinates.substr(1));
        
        unordered_map<char , int> alphabetAsNumber{
            {'a' , 1} , {'b' , 2} , {'c' , 3} , {'d' , 4} ,
            {'e' , 5} , {'f' , 6} , {'g' , 7} , {'h' , 8}
        };
        
        if(alphabetAsNumber[coordinates[0]]%2 == 0){
            if(num%2 != 0){
                return true;
            }
        }
        
        else{
            if(num%2 == 0){
                return true;
            }
        }
        return false;
    }
};