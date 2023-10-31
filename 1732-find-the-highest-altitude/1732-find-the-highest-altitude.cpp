class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> altitude(n+1 , 0);
        
        for(int i = 0; i<n; i++){
            altitude[i+1] = gain[i] + altitude[i];
        }
        
        return *max_element(altitude.begin() , altitude.end());
    }
};