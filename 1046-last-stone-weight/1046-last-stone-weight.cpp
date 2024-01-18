class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> store(stones.begin() , stones.end());
        
        while(store.size()>1){
            int y = store.top();
            store.pop();
            
            int x = store.top();
            store.pop();
            
            if(x != y){
                int sub = y-x;
                store.push(sub);
            }
        }
        
        if(store.empty()){
            return 0;
        }
        return store.top();
    }
};