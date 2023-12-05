class Solution {
public:
    int distinctIntegers(int n) {
        set<int> unique_values;
        unique_values.insert(n);
        
        while(n>2){
            for(int i = 2; i<n; i++){
                if(n%i == 1){
                    unique_values.insert(i);
                }
            }
            n--;
        }
        
        return unique_values.size();
    }
};