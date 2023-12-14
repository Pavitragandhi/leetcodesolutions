class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> answer;
        int n = score.size();
        vector<int> copy = score;
        unordered_map<int , string> store;
        
        sort(copy.begin() , copy.end() , [](int a , int b){
            return a>b;
        });
        
        for(int i = 0; i<n; i++){
            if(i == 0){
                store[copy[i]] = "Gold Medal";
            }
            else if(i == 1){
                store[copy[i]] = "Silver Medal";
            }
            else if(i == 2){
                store[copy[i]] = "Bronze Medal";
            }
            else{
                store[copy[i]] = to_string(i+1);
            }
        }
        
        for(int i = 0; i<n; i++){
            answer.push_back(store[score[i]]);
        }
        return answer;
    }
};