class Solution {
public:
    string oddString(vector<string>& words) {
        int n = words.size();
        int m = words[0].size();
        map<string , vector<int>> check_1;
        map<vector<int> , int> check_2;
        
        for(int i = 0; i<n; i++){
            vector<int> push;
            for(int j = 0; j<m-1; j++){
                int difference = words[i][j+1] - words[i][j];
                push.push_back(difference);
            }
            check_1[words[i]] = push;
            check_2[push]++;
        }
        
        for(auto pair : check_1){
            if(check_2[pair.second] == 1){
                return pair.first;
            }
        }
        
        return "-1";
    }
};