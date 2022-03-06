class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int i = 0 ;
        int  j = 1;
        
        while(i<nums.size() && j < nums.size()) 
        
        {
            
            if(nums[i] == 0){
                
                if(nums[j]!=0) {
                    
                    swap(nums[i],nums[j]);
                    i++;
                    j++;
                }
                
                else
                    j++;
            }
            
            else {
                
                i++;
                j++;
            }
            
        }
        
        
    }
};