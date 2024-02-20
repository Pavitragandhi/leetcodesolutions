class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        istringstream str_1(s1);
        istringstream str_2(s2);
        string read_1;
        unordered_map<string , int> store;
        
        while(str_1 >> read_1){
            store[read_1]++;
        }
        
        while(str_2 >> read_1){
            store[read_1]++;
        }
        
        vector<string> result;
        for(auto pair : store){
            if(pair.second == 1){
                result.push_back(pair.first);
            }
        }
        return result;
    }
};