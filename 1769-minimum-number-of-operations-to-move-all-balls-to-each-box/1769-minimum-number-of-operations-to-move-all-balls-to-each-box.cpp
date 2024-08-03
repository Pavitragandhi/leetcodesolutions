class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> result;
        int n = boxes.size();
        
        for(int i = 0; i<n; i++){
            int sum = 0;
            for(int j = 0; j<n; j++){
                if(i == j){
                    continue;
                }
                if(boxes[j] == '1'){
                    sum += abs(i-j);
                }
                else{
                    continue;
                }
            }
            result.push_back(sum);
        }
        return result;
    }
};