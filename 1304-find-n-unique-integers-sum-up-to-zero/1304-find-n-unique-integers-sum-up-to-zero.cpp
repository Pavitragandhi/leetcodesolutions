class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> result;
        
        if(n%2 == 0){
            int i = 0;
            while(i<n){
                result.push_back(n-i);
                result.push_back(-(n-i));
                i += 2;
            }
        }
        else{
            int i = 0;
            while(i<n){
                if(i != 0){
                    result.push_back(n-i);
                    result.push_back(-(n-i));
                    i += 2;
                }
                else{
                    result.push_back(i);
                    i++;
                }
            }
        }
        return result;
    }
};