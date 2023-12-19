class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;
        
        for(int i = left; i<=right; i++){
            string s = words[i];
            
            if(checkValid(s[0]) && checkValid(s.back())){
                count++;
            }
        }
    
        return count;
    }
    
private:
    bool checkValid(char c){
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }
};