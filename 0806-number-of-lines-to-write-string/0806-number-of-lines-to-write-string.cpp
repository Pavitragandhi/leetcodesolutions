class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int lines = 1;
        int size_of_line = 0;
        
        for(char c : s){
            int char_width = widths[c - 'a'];
            
            if(size_of_line + char_width > 100){
                lines++;
                size_of_line = 0;
            }
            size_of_line += char_width;
        }
        
        return {lines , size_of_line};
    }
};