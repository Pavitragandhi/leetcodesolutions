class Solution {
public:
    string reversePrefix(string word, char ch) {
        size_t search = word.find(ch);
        reverse(word.begin() , word.begin()+search+1);
        
        return word;
    }
};