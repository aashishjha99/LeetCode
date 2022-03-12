class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        
        vector<int> ans(nums.size());
        
        for(int i = 0 ;i < nums.size();i++) {
            
            int j  = i;
            
            
            
            while(j!=index[i]){
                
                ans[j] =  ans[j-1];
                j--;
                
            }
            
            
            ans[index[i]] = nums[i];
            
            
        }
        
        return ans;
        
        
    }
};