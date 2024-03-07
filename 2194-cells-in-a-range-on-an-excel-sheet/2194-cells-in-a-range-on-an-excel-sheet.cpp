class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> result;
        int n = s[3] - s[0];
        int m = s[4] - s[1];
        string store = "";
        char alpha = s[0];
        char digit = s[1];
        
        for(int i = 0; i<=n; i++){
            char ch_1 = alpha + i;
            for(int j = 0; j<=m; j++){
                char ch_2 = digit + j;
                store += ch_1;
                store += ch_2;
                result.push_back(store);
                store = "";
            }
        }
        return result;
    }
};