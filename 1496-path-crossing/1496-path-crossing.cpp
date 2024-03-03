class Solution {
public:
    bool isPathCrossing(string path) {
        int x = 0;
        int y = 0;
        unordered_set<string> store;
        store.insert("0,0");
        
        for(char c : path){
            switch(c){
                case 'N':
                    y++;
                    break;
                    
                case 'S':
                    y--;
                    break;
                
                case 'E':
                    x++;
                    break;
                    
                case 'W':
                    x--;
                    break;
            }
            
            string position = to_string(x) + "," + to_string(y);
            if(store.count(position) > 0){
                return true;
            }
            
            store.insert(position);
        }
        
        return false;
    }
};