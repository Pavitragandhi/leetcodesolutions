class Solution {
public:
    string reformatNumber(string number) {
        string store = "";
        
        for(char c : number){
            if(isdigit(c)){
                store += c;
            }
        }
        
        int n = store.size();
        string result;
        int i = 0;
        
        while(i < n){
            if(n-i == 4){
                result += store.substr(i,2) + "-";
                i+=2;
                result += store.substr(i,2);
                break;
            }
            else if(n-i == 2){
                result += store.substr(i,2);
                break;
            }
            else if(n-i == 3){
                result += store.substr(i ,3);
                break;
            }
            else{
                result += store.substr(i,3) + "-";
                i+=3;
            }
        }
        return result;
    }
};