class Solution {
public:
    string sortSentence(string s) {
        istringstream split(s);
        vector<string> stores;
        string read;
        
        while(split >> read){
            stores.push_back(read);
        }
        
        map<int , string> sentence_map;
        
        for(auto word : stores){
            int keys = stoi(word.substr(word.size() - 1));
            string values = word.substr(0 , word.size() - 1);
            sentence_map[keys] = values;
        }
        
        string original_sentence = "";
        
        for(auto word : sentence_map){
            original_sentence += word.second + ' ';
        }
        original_sentence.pop_back();
        return original_sentence;
    }
};