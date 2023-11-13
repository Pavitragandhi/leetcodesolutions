class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1, 0);
        
        for(int i = 1; i<=n; i++){
            ans[i] = onesCount(i);
        }
        
        return ans;
    }
    
private:
    int onesCount(int num){
        
        string binary_value = "";
        
        while(num > 0){
            int remainder = num%2;
            binary_value = to_string(remainder) + binary_value;
            num /= 2;
        }
        
        int counts = count(binary_value.begin() , binary_value.end() , '1');
        return counts;
    }
};