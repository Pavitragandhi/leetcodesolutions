class Solution {
public:
    bool palindrome(string b){
        int i=0;
        int j = b.length()-1;
        while(i<=j){
            if(b[i]!=b[j]){
                return false;        
            }
            i++;
            j--;
        }
        
        return true;
    }
    
    
    
    string lower(string a){
        
        for(int i=0;i<a.length();i++){
            if(a[i]>='A'&&a[i]<='Z'){
                
                a[i]=a[i] + 'a' -'A';
            }
        }
        
        return a;
        
    }
    
    
    
    
    bool isPalindrome(string s) {
        string a ="";
        
       for (char c : s) {
        if (std::isalnum(c)) {
            a.push_back(c);
        }
    }
            
            
        
       string b = lower(a);
        
        if(palindrome(b)){
            return true;
        }
        else{
            return false;
        }
        
    }
};