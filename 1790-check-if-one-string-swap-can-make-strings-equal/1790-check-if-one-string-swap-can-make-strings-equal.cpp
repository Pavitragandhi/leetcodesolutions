class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n = s1.size();
        int count = 1;
        
        if(s1 == s2){
            return true;
        }
        
        for(int i = 0; i<n-1; i++){
            if(s1[i] != s2[i] && count == 1){
                count++;
                for(int j = i+1; j<n; j++){
                    swap(s1[i] , s1[j]);
                    if(s1 == s2){
                        return true;
                    }
                    else{
                        swap(s1[i] , s1[j]);
                    }
                }
            }
        }
        return false;
    }
};