class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        istringstream s(sentence);
        string read;
        vector<string> store;
        int n = searchWord.size();
        
        while(s >> read){
            store.push_back(read);
        }
        
        int result = -1;
        int count = 1;
        for(string str : store){
            if(str.size() < n){
                count++;
                continue;
            }
            string check = str.substr(0 , n);
            if(check == searchWord){
                result = count;
                break;
            }
            count++;
        }
        return result;
    }
};