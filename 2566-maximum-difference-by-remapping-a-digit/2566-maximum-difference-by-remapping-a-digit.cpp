class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        int n = s.size();
        char store1;
        
        for(int i = 0; i<n; i++){
            if(s[i] != '9'){
                store1 = s[i];
                break;
            }
        }
        for(int i = 0; i<n; i++){
            if(store1 == s[i]){
                s[i] = '9';
            }
        }
        int max_store = stoi(s);
        string g = to_string(num);
        char store2 = g[0];
        
        for(int i = 0; i<n; i++){
            if(store2 == g[i]){
                g[i] = '0';
            }
        }
        int min_store = stoi(g);
        return max_store - min_store;
    }
};