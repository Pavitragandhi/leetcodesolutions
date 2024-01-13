class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int maximum = INT_MIN;
        
        for(int i = 0; i<n-1; i++){
            for(int j = i+1; j<n; j++){
                if(colors[i] != colors[j]){
                    int check = abs(i - j);
                    maximum = max(maximum , check);
                }
            }
        }
        return maximum;
    }
};