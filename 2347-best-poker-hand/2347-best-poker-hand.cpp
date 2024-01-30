class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_map<int , int> same_kind;
        unordered_map<char , int> flush;
        int n = ranks.size();
        
        for(int i = 0; i<n; i++){
            same_kind[ranks[i]]++;
            flush[suits[i]]++;
        }
        
        for(auto pair : flush){
            if(pair.second == 5){
                return "Flush";
            }
        }
        
        for(auto pair : same_kind){
            if(pair.second >= 3){
                return "Three of a Kind";
            }
        }
        
        for(auto pair : same_kind){
            if(pair.second == 2){
                return "Pair";
            }
        }
        return "High Card";
    }
};