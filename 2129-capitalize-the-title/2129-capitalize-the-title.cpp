class Solution {
public:
    string capitalizeTitle(string title) {
        istringstream s(title);
        string read;
        vector<string> store;
        
        while(s >> read){
            store.push_back(read);
        }
        
        string result = "";
        
        for(string word : store){
            if(word.size() > 2){
                transform(word.begin() , word.end() , word.begin() , ::tolower);
                word[0] = toupper(word[0]);
                result += word + " ";
            }
            else{
                transform(word.begin() , word.end() , word.begin() , ::tolower);
                result += word + " ";
            }
        }
        result = result.substr(0 , result.size()-1);
        return result;
    }
};