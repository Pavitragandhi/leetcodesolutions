class Solution {
public:
    string defangIPaddr(string address) {
        string correct;
        
        for(char i : address){
            if(i == '.'){
                correct += "[.]";
            }
            else{
                correct += i;
            }
        }
        return correct;
    }
};