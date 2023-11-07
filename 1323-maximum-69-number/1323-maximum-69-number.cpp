class Solution {
public:
    int maximum69Number (int num) {
        string number = to_string(num);
        int n = number.size();
        vector<int> stores(n);
        
        if(number.find("6") == string::npos){
            return stoi(number);
        }
        
        for(int i = 0; i<n; i++){
            if(number[i] == '9'){
                number[i] = '6';
            }
            else{
                number[i] = '9';
            }
            int values = stoi(number);
            stores.push_back(values);
            number = to_string(num);
        }
        return *max_element(stores.begin() , stores.end());
    }
};