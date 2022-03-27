class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int rightSum = accumulate(nums.begin(),nums.end(),0); // for adding purpose
        int leftSum = 0;
        for(int i=0;i<nums.size();i++){            
            rightSum -= nums[i];
            
            if(leftSum == rightSum){
                return i;
            }
            leftSum += nums[i];
        }
        return -1;    // if nothing is there return -1
    
        
    }
};