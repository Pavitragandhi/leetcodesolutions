class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.size();
        string result = "";
        int maximum = INT_MIN;
        string store = "";
        
        for(int i = 0; i<n-2; i++){
            if(num[i] == num[i+1] && num[i+1] == num[i+2]){
                store = num.substr(i , 3);
                int check = stoi(store);
                
                if(check > maximum){
                    maximum = check;
                    result = store;
                }
            }
        }
        return result;
    }
};