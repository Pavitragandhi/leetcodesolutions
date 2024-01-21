class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int total_time = 0;
        int n = tickets.size();
        
        while(tickets[k] > 0){
            for(int i = 0; i<n; i++){
                if(tickets[i] > 0){
                    tickets[i]--;
                    total_time++;
                }
                if(i == k && tickets[k] == 0){
                    return total_time;
                }
            }
        }
        return total_time;
    }
};