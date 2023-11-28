class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        int m = queries.size();
        vector<int> answer(m);
        sort(nums.begin() , nums.end());
        
        for(int i = 0; i<m; i++){
            int count = 0;
            int sum = 0;
            for(int j = 0; j<n; j++){
                if(queries[i] >= nums[j] && queries[i] >= nums[j]+sum){
                    sum += nums[j];
                    count++;
                }
            }
            answer[i] = count;
        }
        
        return answer;
    }
};