class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<char , string> morse_code_map = {
            {'a' , ".-"} , {'b' , "-..."} , {'c' , "-.-."} , {'d' , "-.."} , {'e' , "."} ,
            {'f' , "..-."} , {'g' , "--."} , {'h' , "...."} , {'i' , ".."} , {'j' , ".---"} ,
            {'k' , "-.-"} , {'l' , ".-.."} , {'m', "--"} , {'n', "-."} , {'o', "---"} ,
            {'p', ".--."} , {'q', "--.-"} , {'r', ".-."} , {'s', "..."} , {'t', "-"} , 
            {'u', "..-"} , {'v', "...-"} , {'w', ".--"} , {'x', "-..-"} , {'y', "-.--"} ,
            {'z', "--.."}
        };
        
        set<string> transformations;
        
        for(string word : words){
            string transform;
            for(char i : word){
                transform += morse_code_map[i];
            }
            transformations.insert(transform);
        }
        
        return transformations.size();
    }
};