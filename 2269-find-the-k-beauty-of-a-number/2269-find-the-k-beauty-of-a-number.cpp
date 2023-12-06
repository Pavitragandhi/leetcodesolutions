class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int n = s.size();
        int count = 0;
        
        for(int i = 0; i<=n-k; i++){
            string g = s.substr(i , k);
            int store = stoi(g);
            if(store == 0){
                continue;
            }
            
            if(num%store == 0){
                count++;
            }
        }
        return count;
    }
};