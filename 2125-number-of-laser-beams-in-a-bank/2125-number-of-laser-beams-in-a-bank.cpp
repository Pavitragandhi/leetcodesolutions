class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> store;
        int result = 0;
        
        for(string str : bank){
            int counts = count(str.begin() , str.end() , '1');
            store.push_back(counts);
        }
        
        int n = store.size();
        
        for(int i = 0; i<n-1; i++){
            int calculate = 0;
            if(store[i] == 0){
                continue;
            }
            for(int j = i+1; j<n; j++){
                if(store[j] == 0){
                    continue;
                }
                
                if(store[j] != 0){
                    calculate = store[i] * store[j];
                    break;
                }
            }
            result += calculate;
        }
        
        return result;
    }
};