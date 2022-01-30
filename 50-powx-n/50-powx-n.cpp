class Solution {
    
    private:
    
        double pow(double x,int n) {
            
             
        if(n==0) {
            
            return 1;
        }
            
        if(n==1){
            return x ;
        }
         double ans = pow(x,n/2);
        if(n % 2 == 0) {
            
         return ans * ans;
        }
        
        else {
            
            return x * ans * ans;
        }
            
    }
    
public:
    double myPow(double x, int n) {
       
        
        if(n  < 0 )
        {
            return  1 / pow(x,n);
        }
        
        else {
            
            return pow(x,n);
        }
    }
};