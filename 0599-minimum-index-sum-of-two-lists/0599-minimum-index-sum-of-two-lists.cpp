class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string , int> store_1;
        int minimum = INT_MAX;
        vector<string> result;
        
        for(int i = 0; i<list1.size(); i++){
            store_1[list1[i]] = i;
        }
        
        for(int i = 0; i<list2.size(); i++){
            if(store_1.find(list2[i]) != store_1.end()){
                if(store_1[list2[i]] + i < minimum){
                    result.clear();
                    result.push_back(list2[i]);
                    minimum = store_1[list2[i]] + i;
                }
                else if(store_1[list2[i]] + i == minimum){
                    result.push_back(list2[i]);
                }
            }
        }
        return result;
    }
};