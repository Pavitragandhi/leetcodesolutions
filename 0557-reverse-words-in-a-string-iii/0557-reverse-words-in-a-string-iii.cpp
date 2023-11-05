class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin() , s.end());
        istringstream split(s);
        string read;
        vector<string> stores;
        
        while(split >> read){
            stores.push_back(read);
        }
        
        string reverse_sentence = "";
        
        for(int i = stores.size() - 1; i>=0; i--){
            reverse_sentence += stores[i] + ' ';
        }
        
        reverse_sentence.pop_back();
        return reverse_sentence;
    }
};