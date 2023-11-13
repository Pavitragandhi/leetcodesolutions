class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        
        for(int i = 0; i<=n; i++){
            int number = onesCount(i);
            ans.push_back(number);
        }
        
        return ans;
    }
    
private:
    int onesCount(int num){
        if(num == 0){
            return 0;
        }
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