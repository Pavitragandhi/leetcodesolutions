class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> store;
        
        for(string s : emails){
            bool check = false;
            bool plus = false;
            string unique = "";
            
            for(char c : s){
                if(check == false){
                    if(plus == false && c != '+' && c != '@'){
                        if(c == '.'){
                            continue;
                        }
                        else{
                            unique += c;
                        }
                    }
                    else if(c == '+'){
                        plus = true;
                    }
                    else if(c == '@'){
                        unique += c;
                        check = true;
                    }
                }
                else if(check == true){
                    unique += c;
                }
            }
            store.insert(unique);
        }
        return store.size();
    }
};