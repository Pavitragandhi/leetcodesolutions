class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        
        for(string s : operations){
            if(s == "C"){
                record.pop_back();
            }
            else if(s == "D"){
                int num = record.back();
                record.push_back(num*2);
            }
            else if(s == "+"){
                int sum = record.back() + record[record.size()-2];
                record.push_back(sum);
            }
            else{
                int i = stoi(s);
                record.push_back(i);
            }
        }
        
        int total_sum = 0;
        for(int i : record){
            total_sum += i;
        }
        return total_sum;
    }
};