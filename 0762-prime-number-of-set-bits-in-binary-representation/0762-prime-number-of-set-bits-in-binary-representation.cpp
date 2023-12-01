class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        vector<int> bits_count;
        
        for(int i = left; i<=right; i++){
            bitset<32> binary_representation(i);
            bits_count.push_back(binary_representation.count());
        }
        
        int count = 0;
        
        for(int i = 0; i<bits_count.size(); i++){
            bool check = true;
            if(bits_count[i] == 1){
                check = false;
            }
            for(int j = 2; j<bits_count[i]; j++){
                if(bits_count[i]%j == 0){
                    check = false;
                    break;
                }
            }
            if(check){
                count++;
            }
        }
        return count;
    }
};