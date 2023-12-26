class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maximum = 0;
        int n;
        bool check;
        
        for(string word : strs){
            for(char c : word){
                check = false;
                if(!isdigit(c)){
                    n = word.size();
                    break;
                }
                else{
                    check = true;
                }
            }
            if(check){
                n = stoi(word);
            }
            maximum = max(maximum , n);
        }
        return maximum;
    }
};