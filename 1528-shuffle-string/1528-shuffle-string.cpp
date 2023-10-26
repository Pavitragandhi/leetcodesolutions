class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = indices.size();
        string shuffled = s;
        //shuffled.resize(n , ' ');
        
        for(int i = 0; i<n; i++){
            shuffled[indices[i]] = s[i];
        }
        
        return shuffled;
    }
};