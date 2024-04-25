class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        string check = "";
        for(char c : paragraph){
            if(!isalpha(c)){
                check += ' ';
            }
            else{
                check += tolower(c);
            }
        }
        
        istringstream str(check);
        string read;
        unordered_map<string , int> store;
        
        while(str >> read){
            if(find(banned.begin() , banned.end() , read) == banned.end()){
                store[read]++;
            }
        }
        
        int maximum = 0;
        string result = "";
        
        for(auto pair : store){
            if(pair.second > maximum){
                result = pair.first;
                maximum = pair.second;
            }
        }
        
        return result;
    }
};