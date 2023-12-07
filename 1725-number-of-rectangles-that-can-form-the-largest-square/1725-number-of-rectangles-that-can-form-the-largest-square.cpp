class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int n = rectangles.size();
        vector<int> store;
        
        for(int i = 0; i<n; i++){
            if(rectangles[i][0] > rectangles[i][1]){
                store.push_back(rectangles[i][1]);
            }
            else{
                store.push_back(rectangles[i][0]);
            }
        }
        
        int maxLen = *max_element(store.begin() , store.end());
        int count = 0;
        
        for(int i = 0; i<n; i++){
            if(store[i] == maxLen){
                count++;
            }
        }
        
        return count;
    }
};