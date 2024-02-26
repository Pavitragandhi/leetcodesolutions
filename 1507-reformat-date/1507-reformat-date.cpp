class Solution {
public:
    string reformatDate(string date) {
        istringstream s(date);
        string read;
        vector<string> store;
        unordered_map<string , string> month_map = {
           {"Jan", "01"}, {"Feb", "02"}, {"Mar", "03"}, {"Apr", "04"},
           {"May", "05"}, {"Jun", "06"}, {"Jul", "07"}, {"Aug", "08"},
           {"Sep", "09"}, {"Oct", "10"}, {"Nov", "11"}, {"Dec", "12"}
        };
        
        while(s >> read){
            store.push_back(read);
        }
        
        string year;
        string month;
        string day;
        
        for(int i = 0; i<3; i++){
            if(store[0].size() == 4){
                day = store[0].substr(0,2);
            }
            else{
                day = "0" + store[0].substr(0,1);
            }
            
            if(i == 1){
                month = month_map[store[i]];
            }
            
            if(i == 2){
                year = store[i];
            }
        }
        string result = year + "-" + month + "-" + day;
        return result;
    }
};