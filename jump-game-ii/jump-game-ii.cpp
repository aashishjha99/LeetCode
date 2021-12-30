class Solution {
public:
    int jump(vector<int>& nums) {
        
        int maxm = 0, halt = 0;
        int jump=0;
        
        if(nums[0]==0){
            
            return 0;
        }
        
        for(int i=0;i<nums.size()-1;i++) {
            
            
            maxm = max(maxm,nums[i]+i);
            
            if(i==halt) {
                
                halt = maxm;
                jump++;
            }
            
        }
        
        if(halt>=nums.size()-1) {
            
            return jump;
        }
        
        return -1;
    }

        
    
};