class Solution {
public:
    int countPoints(string rings) {
        unordered_map<char , unordered_set<char>> ringsNrods;
        int n = rings.size();
        vector<bool> countThree(10 , false);
        int count = 0;
        
        for(int i = 0; i<n; i+=2){
            char colour = rings[i];
            char rod = rings[i+1];
            
            ringsNrods[rod].insert(colour);
            
            if(ringsNrods[rod].size() == 3){
                countThree[rod - '0'] = true;
            }
        }
        for(bool allThree : countThree){
            if(allThree == true){
                count++;
            }
        }
        return count;
    }
};