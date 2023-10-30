class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        
        for(string word : words){
            bool check = true;
            for(char i : word){
                if(allowed.find(i) == string::npos ){
                    check = false;
                    break;
                }
            }
            if(check == true){
                count++;
            }
        }
       return count;     
    }
};