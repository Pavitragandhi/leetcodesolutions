class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i = 0;
        int count = 0;
        
        while(count != k){
            i++;
            
            if(find(arr.begin() , arr.end() , i) == arr.end()){
                count++;
            }
        }
        
        return i;
    }
};