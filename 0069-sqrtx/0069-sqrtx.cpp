class Solution {
public:
    long long int BinarySearch(int n){
        int start = 0;
        int end = n;
        long long mid = start + (end-start)/2;
        long long int result = 0;
        
        while(start <= end){
            long long int check = mid*mid;
            
            if(check == n){
                return mid;
            }
            
            if(check < n){
                result = mid;
                start = mid+1;
            }
            else{
                end = mid - 1;
            }
            mid = start + (end-start)/2;
        }
        return result;
    }
    
    int mySqrt(int x) {
        int answer = BinarySearch(x);
        
        return answer;
    }
};