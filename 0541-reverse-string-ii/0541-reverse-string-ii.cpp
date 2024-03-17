class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        string result = "";
        string str = "";
        int count = 0;
        
        for(int i = 0; i<n; i++){
            count++;
            str += s[i];
            if(count == k*2){
                count = 0;
                string check = str.substr(0 , k);
                reverse(check.begin() , check.end());
                result += check;
                result += str.substr(k);
                str = "";
            }
        }
        
        if(count >= k){
            string check = str.substr(0 , k);
            reverse(check.begin() , check.end());
            result += check;
            result += str.substr(k);
        }
        else{
            reverse(str.begin() , str.end());
            result += str;
        }
        
        return result;
    }
};