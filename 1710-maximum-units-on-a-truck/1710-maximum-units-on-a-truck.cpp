class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int total_units = 0;
        
        sort(boxTypes.begin() , boxTypes.end() , [](auto a , auto b){
            return a[1] > b[1];
        });
        
        for(auto num : boxTypes){
            if(truckSize == 0){
                break;
            }
            if(num[0] > truckSize){
                int diff = num[0] - truckSize;
                num[0] -= diff;
            }
            
            total_units += num[0]*num[1];
            truckSize -= num[0];
        }
        
        return total_units;
    }
};