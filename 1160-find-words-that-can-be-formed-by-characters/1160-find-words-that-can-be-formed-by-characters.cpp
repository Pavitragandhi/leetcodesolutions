class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int sum = 0;
        unordered_map<char , int> compare;
        
        for(char c : chars){
            compare[c]++;
        }
        
        for(string word : words){
            unordered_map<char , int> store(compare);
            
            bool check = true;
            for(char i : word){
                if(store.find(i) != store.end() && store[i] > 0){
                    store[i]--;
                }
                else{
                    check = false;
                    break;
                }
            }
            if(check){
                sum += word.size();
            }
        }
        return sum;
    }
};