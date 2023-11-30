class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        
        for(int i = 0; i<n; i++){
            //sum += arr[i];
            vector<int> store;
            for(int j = i; j<n; j++){
                store.push_back(arr[j]);
                if(store.size()%2 != 0){
                    for(int k = 0; k<store.size(); k++){
                        sum += store[k];
                    }
                }
            }
        }
        
        return sum;
    }
};