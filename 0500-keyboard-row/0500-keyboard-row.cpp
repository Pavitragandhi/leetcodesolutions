class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string check1 = "qwertyuiop";
        string check2 = "asdfghjkl";
        string check3 = "zxcvbnm";
        vector<string> result;
        
        for(string word : words){
            string sum ="";
            if(check1.find(tolower(word[0])) != string::npos){
                for(char c : word){
                    if(check1.find(tolower(c)) == string::npos){
                        break;
                    }
                    sum += c;
                }
            }
            else if(check2.find(tolower(word[0])) != string::npos){
                for(char c : word){
                    if(check2.find(tolower(c)) == string::npos){
                        break;
                    }
                    sum += c;
                }
            }
            else{
                for(char c : word){
                    if(check3.find(tolower(c)) == string::npos){
                        break;
                    }
                    sum += c;
                }
            }
            if(sum == word){
                result.push_back(word);
            }
        }
        return result;
    }
};