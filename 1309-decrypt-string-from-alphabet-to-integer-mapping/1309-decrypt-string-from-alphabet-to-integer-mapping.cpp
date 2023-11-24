class Solution {
public:
    string freqAlphabets(string s) {
        int n = s.size();
        string result = "";
        int i = n-1;
        
        while(i>=0){
            if(s[i] == '#'){
                int number = (s[i-2] - '0')*10 +(s[i-1] - '0');
                result += 'a' + number - 1;
                i-=3;
            }
            else{
                result += 'a' + (s[i] - '0') - 1;
                i--;
            }
        }
        reverse(result.begin() , result.end());
        return result;
    }
};