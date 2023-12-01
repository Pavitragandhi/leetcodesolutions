class Solution {
public:
    int splitNum(int num) {
        vector<int> store;
        
        while(num>0){
            int remainder = num%10;
            store.push_back(remainder);
            num /= 10;
        }
        
        sort(store.begin() , store.end());
        int num1 = 0 , num2 = 0;
        
        for(int i = 0; i<store.size(); i++){
            if(i%2 == 0){
                num1 = num1*10 + store[i];
            }
            else{
                num2 = num2*10 + store[i];
            }
        }
        return num1 + num2;
    }
};