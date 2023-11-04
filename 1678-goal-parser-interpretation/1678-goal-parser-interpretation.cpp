class Solution {
public:
    string interpret(string command) {
        int n = command.size();
        string parser_result = "";
        
        for(int i = 0; i<n;){
            if(command[i] == 'G'){
                parser_result += "G";
                i++;
            }
            else if(command[i] == '(' && command[i+1] == ')'){
                parser_result += "o";
                i += 2;
            }
            else if(command[i] == '(' && command[i+1] == 'a' && command[i+2] == 'l'
                   && command[i+3] == ')'){
                parser_result += "al";
                i += 4;
            }
        }
        return parser_result;
    }
};