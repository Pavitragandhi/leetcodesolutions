class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int m = target.size();
        vector<string> result;
        int count = 0;
        
        for(int i = 1; i<=n; i++){
            if(target[count] == i){
                result.push_back("Push");
                count++;
            }
            else{
                result.push_back("Push");
                result.push_back("Pop");
            }
            
            if(target[m-1] == i){
                break;
            }
        }
        return result;
    }
};