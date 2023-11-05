class Solution {
public:
    string decodeMessage(string key, string message) {
        string atoz = "abcdefghijklmnopqrstuvwxyz";
        map<char , char> assign;
        int j = 0;
        
        for(char i : key){
            if(i != ' ' && assign.find(i) == assign.end()){
                assign[i] = atoz[j];
                j++;
            }
        }
        
        string decoded_message;
        
        for(char i : message){
            if(i != ' '){
                decoded_message += assign[i];
            }
            else{
                decoded_message += ' ';
            }
        }
        return decoded_message;
    }
};