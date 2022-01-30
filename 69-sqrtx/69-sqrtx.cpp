class Solution {
    
   private:
    
         long long int binarySearch(int n) {
            
            int low = 0;
            int high = n;
            long long int  mid = low + (high-low)/2;
            long long int  ans = -1;
            
            
            
            while(low <= high) {
               
                 long long int square = mid *mid;
                
                
                if(square == n) {
                    
                    return mid;
                }
                
                if(square < n) {
                    
                    ans = mid;
                    low = mid+1;
                }
                
                
                else {
                    high = mid -1;
                }
                
                mid = low + (high-low)/2;
            }
            
            
            return ans;
            
        }
    
    
public:
    int mySqrt(int x) {
        
        return binarySearch(x);
    }
};