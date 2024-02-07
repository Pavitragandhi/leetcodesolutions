class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details.size();
        int count = 0;
        string check = "";
        
        for(int i = 0; i<n; i++){
            check += details[i][11];
            check += details[i][12];
            
            int num = stoi(check);
            
            if(num > 60){
                count++;
            }
            
            check = "";
        }
        return count;
    }
};