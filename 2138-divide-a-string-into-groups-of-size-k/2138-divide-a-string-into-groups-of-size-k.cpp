class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n = s.size();
        vector<string> result;
        int check = 0;
        
        for(int i = 0; i<n; i+=k){
            string store;
            if(check + k <= n){
                check += k;
                store = s.substr(i , k);
                result.push_back(store);
            }
            else{
                int diff = n - check;
                store = s.substr(i , diff);
                for(int j = 0; j<k-diff; j++){
                    store += fill;
                }
                result.push_back(store);
            }
        }
        return result;
    }
};