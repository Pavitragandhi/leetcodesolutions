class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        while(left <= right){
            int num = left;
            vector<int> stores;
            while(num > 0){
                int remainder = num%10;
                if(remainder == 0){
                    break;
                }
                if(left%remainder == 0){
                    stores.push_back(remainder);
                    num /= 10;
                }
                else{
                    break;
                }
            }
            string comp = to_string(left);
            if(comp.size() == stores.size()){
                result.push_back(left);
            }
            left++;
        }
        return result;
    }
};