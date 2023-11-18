class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        map<int , string , greater<int>> stores;
        vector<string> result;
        
        for(int i = 0; i<n; i++){
            stores[heights[i]] = names[i];
        }
        
        for(const auto values : stores){
            result.push_back(values.second);
        }
        
        return result;
    }
};