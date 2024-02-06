class Solution {
public:
    bool areNumbersAscending(string s) {
        int n = s.size();
        vector<int> store;
        string read = "";
        
        for(int i = 0; i<n; i++){
            if(isdigit(s[i]) && isdigit(s[i+1])){
                read += s[i];
                read += s[i+1];
                int check = stoi(read);
                store.push_back(check);
                read = "";
                i++;
            }
            else if(isdigit(s[i]) && !isdigit(s[i+1])){
                int check = s[i] - '0';
                store.push_back(check);
            }
        }
        
        for(int i = 0; i<store.size()-1; i++){
            if(store[i] >= store[i+1]){
                return false;
            }
        }
        return true;
    }
};